#include <stdio.h>


int	main()
{
	int	A, B, C, D;

	printf("Insert (int) [A] [B] [C] : \n");
	scanf("%d%d%d", &A, &B, &C);
	D = 0;
	if(A <= B && C >= B)
	{
		D = 5;
	}
	printf("D is: %d \n", D);
	return 0;
}

