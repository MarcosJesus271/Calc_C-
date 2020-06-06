#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
for( ; ; )
{
		
    printf("\7 \a");

  float n1 = 0, n2 = 0, media =0, nome;
    
	system("color 02");
    printf("\t\tCalculadora de media, de um Enter para continuar");
		 
	getch();
		     
    printf("\n\nDigite o valor da av1: ");
    scanf("%f", &n1);		  
    printf("Digite o valor da av2: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
   
   printf("a media das notas e: %f",media);
     if (media <= 5.99999)
	    
		{
     	system ("color 04");
		 printf("\nReprovado\n");
        	//Inicio da sequencia dos beep's de reprovação.
		   Beep(1000,400); 
		   Beep(1000,400);
		   Beep(1000,400);
		   Beep(1000,400);
		   Beep(1000,400);
		   Beep(1000,400);
		   Beep(1000,400);
		                  }
   
    else{
    system("color 01 ");
      printf("\nAprovado\n");
       Beep (1046,1500);
       }
    
	   printf("\n");
	      system("PAUSE");
	      system("cls");
	printf("\n");
	}
	 
	}
