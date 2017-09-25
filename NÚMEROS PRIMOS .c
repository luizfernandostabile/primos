# include <stdio.h>
# include <stdlib.h>
int main()

{
	char nome;
	int i;
	int num;
	int vezes=0;

	printf("ola, meu nome he luiz fernando stbile de souza e vou calcular numeros primos: \n");
	printf("entre com um numero positivo: \n ");
	 	scanf("%d", &num );


	for( i=1;i<= num && vezes<=3;i++ )
	{
		if(num % i ==0)
		vezes ++;
	}
		if(vezes ==2)
		{
		printf(" o numero he primo: \n ");
	}

		else
		printf(" o numero nao he primo: \n ");
        printf("deseja continuar?\n 1-sim 2-nao\n ");

		system("pause");
		return 0;
}
