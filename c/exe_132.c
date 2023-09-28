#include <stdio.h>


int	main()
{
	int X, Y, Z;
	scanf("%d%d%d", &X, &Y, &Z);
	if (X < Y + Z && Y < X + Z && Z < X + Y)
	{
		if (X == Y && X == Z)
		{
			printf("\nEquilateral Triangle!\n");
		}if (X == Y || Y == Z || X == Z)
		{
			printf("\nIsosceles Triangle!\n");
		}else
		{
			printf("\nEscalene Triangle!\n");
		}
	}else
	{
		printf("\nIs not a Triangle!\n");
	}
	return 0;
}
