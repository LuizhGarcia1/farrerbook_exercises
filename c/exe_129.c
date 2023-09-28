#include <stdio.h>


int	main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	if (A + B < C)
	{
		printf("%d + %d is less than %d \n", A, B, C);
	}
	return 0;
}
