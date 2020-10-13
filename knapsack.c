#include<stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int W, int wt[], int val[], int n)
{
	int i, w;
	int t[n + 1][W + 1];

	for (i = 0; i <= n; i++)
	{
		for (w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0)
				t[i][w] = 0;
			else if (wt[i - 1] <= w)
				t[i][w] = max(val[i - 1] + t[i - 1][w - wt[i - 1]],  t[i - 1][w]);
			else
				t[i][w] = t[i - 1][w];
		}
	}

	return t[n][W];
}

int main()
{
	int i, n, val[20], wt[20], W;

	printf("Enter number of items:");
	scanf("%d", &n);

	printf("Enter value of items:\n");
	for (i = 0; i < n; ++i) {
		scanf("%d", &val[i]);
	}

	printf("Enter weight of items:\n");
	for (i = 0; i < n; ++i) {
		scanf("%d", &wt[i]);
	}

	printf("Enter size of knapsack/bag:");
	scanf("%d", &W);

	printf("%d\n", knapsack(W, wt, val, n));
	return 0;
}