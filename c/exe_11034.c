#include <stdio.h>


int	main()
{
	int	A, B, I, M;
	
	printf("Insert [M]: \n");
	scanf("%d", &M);
	if (M != 0)
	{
		I = M / 12;
		A = M / 12;
		B = A;
		if ((M % 12) >= 6)
		{
			I = I + 1;
		}
		printf("A is: [%d] B is [%d] and I is [%d] \n", A, B, I);
	}
	return 0;
}
