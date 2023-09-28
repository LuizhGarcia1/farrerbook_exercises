#include <stdio.h>


int	main()
{
	int L, M, N, temp;
	
	scanf("%d%d%d", &L, &M, &N);
	if (L > M || L > N)
	{
		if (M < N)
		{
			temp = L;
			L = M;
			M = temp;
		}else
		{
			temp = L;
			L = N;
			N = temp;
		}
	}if (M > N)
	{
		temp = M;
		M = N;
		N = temp;
	}
	printf("\n %d, %d, %d \n", L, M, N);
	return 0;
}

