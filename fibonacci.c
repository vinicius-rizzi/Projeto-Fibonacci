#include <stdio.h>
#include <stdlib.h>

int main (){

	int n, a=-1, b=1, x;
	printf("Insira um numero maior que 0: ");
	scanf("%d", &n);

	if(n < 0) {
		printf("Numero invalido, informe um numero maior que 0");
	}else{
		printf("Sequencia de Fibonacci para o valor de %d: ", n);
		
		while (b < n) {
			x = a + b;
			printf("%d, ", x);
			a=b;
			b=x;
		}
		printf("\n");
		system("pause");
		return 0;
	}
}


