
#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }
int a(int W, int wt[], int val[], int n)
{

	if (n == 0 || W == 0)
		return 0;
	if (wt[n - 1] > W)
		return a(W, wt, val, n - 1);
	else
		return max(
			val[n - 1]
             + a(W - wt[n - 1], wt, val, n - 1),
			a(W, wt, val, n - 1));
}
int main()
{
	int profit[] = { 1,2,3 };
	int weight[] = { 4,5,1};
	int W = 4;
	int n = sizeof(profit) / sizeof(profit[0]);
	printf("%d", a(W, weight, profit, n));
	return 0;
}
