#include<stdio.h>


int	main()
{
	int A, B, C;
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	C = (A + B) * B;
	printf("%d, %d, %d \n", A, B, C);
	return 0;
}
