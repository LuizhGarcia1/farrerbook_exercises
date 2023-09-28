#include <stdio.h>


 int	main()
{
	float A, B, X, Y;
	scanf("%f%f", &A, &B);
	if (A == B)
	{
		X = 1.5;
		Y = 2.5;
	}else
	{
		X = -1.5;
		Y = -2.5;
	}
	printf("X is %.1f and Y is %.1f \n", X, Y);
	return 0;
}
