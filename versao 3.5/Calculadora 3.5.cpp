#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
for(; ;)
{

		printf("\7 \a");
		
    float n1 = 0, n2 = 0, n3=0, media =0,media1=0,media2=0;
    char pg;
    
	system("color 02");
    printf("\t\t\t Calculadora de media das provas da UVA\n");
		 
	printf("\n");
		     
    printf("\n\nDigite o valor da av1: ");
    scanf("%f", &n1);		  
    printf("Digite o valor da av2: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
   
   printf("a media das notas e: %.2f",media);
   
   if(media >= 6.00)
   {printf("\nAprovado\n");
    system("color 01");
    Beep(1000,400);
    }
   else if (media >=5.00 && media <=5.99)
    {system("color 0E");
    system ("color 04");
    Beep(1001,100);
	system("color 0E");
	system ("color 04");
    Beep(1003,100);
	system("color 0E");
	system ("color 04");
    Beep(1005,100);
	system("color 0E");
	system ("color 04");
    Beep(1000,100);
	system("color 0E");
	
	printf("\nPrecisa fazer a AV3\n");
	erro:
		printf("\nVoce fez a av3? (s/n): ");
			scanf("%s",&pg);
		    
		if(pg=='s')
			{
				printf("digite o valor da av3: ");
					scanf("%f", &n3);
						if( n1 <= n2 && n1 <=n3)
		{
		media2 = (n3+n2)/2;
		printf ("\n Substituindo sua menor nota de: %.2f",n1);
		if(media2>=6)		
		{
		system("color 02");
		printf("\n Voce conseguiu nota suficiente.Aprovado com %.2f!\n",media2);
		
		}else
		printf("\nSe fudeu.\n");
		}
	
						if ( n2 <= n1 && n2 <=n3)
		{
		media2 = (n3+n1)/2;
		printf("\nSubstituindo sua menor nota de: %.2f",n2);
		if(media2>=6)
		{
		system("color 02");
		printf("\n Voce conseguiu nota suficiente.Aprovado com %.2f!\n",media2);
		}else
		printf("\nReprovado.\n");
		}
	
						else if ( n3 <= n1 && n3 <= n2)
   		 {
			printf("\nSua nota na av3 foi:%.2f",n3);
			system ("color 04");
		printf("\n Voce nao conseguiu nota suficiente, sinto muito tera que realizar o periodo novamente.\n");
			Beep(700,700);
        }
}
	  
	    else if (pg=='n')
	    {
	    	printf("\n\n SE FERROU KKKKK\n");
		if (pg!='n')
		{
		printf("\n\nDigite novamente");
		goto erro;
    	}
}
	
		}
	
 else{
   
   	system ("color 04");
	   printf("\nReprovado\n");
	 Beep(1000,700);
	    }
  system("pause");
  
  printf("\n");
	}
	}
  
  


 
