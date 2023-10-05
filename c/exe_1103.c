#include <stdio.h>
#include <stdbool.h>

int	main()
{
	bool	TEST, C;
	int	A2, B3;

	printf("Insert 2 int Values: \n");
	scanf("%d%d", &A2, &B3);
	if (A2 <= B3)
	{
		TEST = true;
	}else
	{
		TEST = false;
	}
	C = TEST;
	printf("C is: %d \n", C);
	return 0;
}
