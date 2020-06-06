#include<stdio.h>
#include<stdlib.h>

      int main()
      {
      	int num1,num2,soma,subtracao,multi,div;
      	 
      	 printf("\n \t\t\t\t\t Calculadora boladona");
      	 printf("\nColoque o primeiro numero pra processar: ");
      	 scanf("%i",&num1);
      	 printf("\nColoque o segundo numero: ");
		   scanf("%i",&num2);
      	 
      	                     soma = num1+num2;
                             subtracao = num1-num2;
							 multi = num1*num2;
							 div = num1/num2;
							 
		printf("A soma e:%i\n",soma);					         	 
        printf("A subtracao e:%i\n",subtracao);
		printf("O produto e:%i\n",multi);
		printf("A divicao e:%i\n",div);
		
		return 0;  	 
	  }
