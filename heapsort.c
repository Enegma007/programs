#include<stdio.h>
#include<stdlib.h>

void heapify(int A[], int n, int i) {
    int max = i, d;
    int l = 2 * i + 1, r = 2 * i + 2;

    if (l < n && A[l] > A[max]) max = l;
    if (r < n && A[r] > A[max]) max = r;
    if (max != i) {
        d = A[i];
        A[i] = A[max];
        A[max] = d;
        heapify(A, n, max);
    }
}

void heap_sort(int A[], int n) {
    int c;
    for (int i = n / 2 - 1; i >= 0; i--) heapify(A, n, i);
    for (int i = n - 1; i > 0; i--) {
        c = A[0];
        A[0] = A[i];
        A[i] = c;
        heapify(A, i, 0);
    }
}

int main() {
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int A[1001];

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Before heap sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    heap_sort(A, n);
    printf("\n");

    printf("After heap sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    return 0;
}