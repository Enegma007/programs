#include<stdio.h>

int max_el(int A[], int n) {
    int mX = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > mX) mX = A[i];
    }
    return mX;
}


void count_sort(int A[], int n, int x) {
    int B[n];
    int i, C[10] = {0};

    for (i = 0; i < n; i++) C[(A[i] / x) % 10]++;


    for (i = 1; i < 10; i++) C[i] += C[i - 1];

    for (i = n - 1; i >= 0; i--) {
        B[C[(A[i] / x) % 10] - 1] = A[i];
        C[(A[i] / x) % 10]--;
    }


    for (i = 0; i < n; i++) A[i] = B[i];
}


void radix_sort(int A[], int n) {
    int m = max_el(A, n);

    for (int x = 1; m / x > 0; x *= 10) count_sort(A, n, x);
}


int main() {
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int A[1001];

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Before radix sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    radix_sort(A, n);
    printf("\n");

    printf("After radix sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    return 0;
}