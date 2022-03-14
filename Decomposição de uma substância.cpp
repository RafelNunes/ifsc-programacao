#include<stdio.h>
#include<math.h>

main()
{
	int F, t, Q, A;
	
	printf("Digite valor de t: ");
	scanf("%d", &F);
	t = -0.5 * F;
	A = pow (2,t);
	if (A<0){
		printf("-%d", A);
	}
	Q = 2048 * A;
	
	printf("%d", A);
}
