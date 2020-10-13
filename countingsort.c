#include<stdio.h>
#include<stdlib.h>
void countingsort(int a[], int n, int k)
{
    int b[n];
    int i;
    int c[k + 1];
    for (i = 0; i <= k; i++)
    {
        c[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        c[a[i]] = c[a[i]] + 1;
    }
    for (i = 1; i <= k; i++)
    {
        c[i] = c[i] + c[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[c[a[i]] - 1] = a[i];
        c[a[i]] = c[a[i]] - 1;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];

    }
}
void main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = a[0];
    for (int i = 1; i < n; i++)
    {
        if (k < a[i])
        {
            k = a[i];
        }
    }
    printf("Array before sorting is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Array after sorting is: ");
    countingsort(a, n, k);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}


