#include <stdio.h>
#include <time.h>

void merge_subarray(int A[], int l, int m, int r) {
    int p = m - l + 1;
    int q = r - m;
    int i, j, k;
    int L[p], R[q];

    for (int i = 0; i < p; i++) L[i] = A[l + i];
    for (int j = 0; j < q; j++) R[j] = A[m + 1 + j];

    i = 0, j = 0, k = l;
    while (i < p && j < q) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < p) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < q) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int A[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(A, l, m);
        merge_sort(A, m + 1, r);

        merge_subarray(A, l, m, r);
    }
}

int main() {
    int n;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    int A[1001];

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Before merge sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);

    // clock_t st = clock();
    merge_sort(A, 0, n - 1);
    // clock_t et = clock();
    // double tt = (double)(et - st) / CLOCKS_PER_SEC;
    printf("\n");

    printf("After merge sort: ");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    // printf("Time taken: %lf", tt);
    return 0;
}