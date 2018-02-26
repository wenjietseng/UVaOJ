// Use brutral force

#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		int i, j, k, l;
		long long int arr[n];
		for (i = 0; i < n; i++)
		{
			scanf("%lld", &arr[i]);
		}
		for (i = n - 1; i >= 0; i--)
		{
			for (j = n - 2; j >= 0; j--)
			{
				for (k = n - 3; k >= 0; k--)
				{
					for (l = n - 4; l >= 0; l--)
					{
						if (arr[i] - arr[j] - arr[k] - arr[l] == 0)
						{
							printf("%lld\n", arr[i]);
							break;
						}
					}
				}
			}	
		}
		printf("no solution\n");
	}
	
}
