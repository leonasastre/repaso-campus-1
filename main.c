#include <stdio.h>
#include <stdlib.h>
/*Solicite al usuario 10 números
Calcule cuántos son negativos y cuantos son positivos
Muestre por pantalla la cantidad de negativos y la cantidad de positivos*/

int main()
{
   int i;
   int a;
   for(i=0;i<10;i++){

 printf("ingrese numumero:");
    scanf("%d",&a);
     if(a<=0)
        {
        printf(" negativo\n");

        }
     else
     {
         printf("positivo\n");
     }

        }

return 0;

   }












