#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
for(; ;)
{

		printf("\7 \a");
		
    float n1 = 0, n2 = 0, media =0, nome;
    
	system("color 02");
    printf("\t\t\t Calculadora de media, de um Enter para continuar\n");
		 
	getch();
		     
    printf("\n\nDigite o valor da av1: ");
    scanf("%f", &n1);		  
    printf("Digite o valor da av2: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
   
   printf("a media das notas e: %f",media);
   
   if(media >= 6.00000)
   {printf("\nAprovado\n");
    system("color 01");
    Beep(1000,800);
    Beep(1000,1000);
    Beep(1000,1100);
    Beep(1000,1200);
   }
   else if (media >=5.00000 && media <=5.99999)
    {printf("\nPrecisa fazer a AV3\n");
    system("color 0E");
    Beep(1000,4000);
}
   else{
   	system ("color 04");
	   printf("\nReprovado\n");
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
	    Beep(1000,100);
   }
  system("pause");
  getch();
  printf("\n");

  }
}

 
