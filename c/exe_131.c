#include <stdio.h>


int	main()
{
	int A, B, C, lower;
	scanf("%d%d%d", &A, &B, &C);
	if (A < B || A < C)
	{
		lower = A;
	}if (B < C)
	{
		lower = B;
	}else
	{
		lower = C;
	}
	printf("The smallest number is %d \n", lower);
	return 0;
}	
