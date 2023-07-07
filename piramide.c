#include <stdio.h>

int main() {
   int i;
   int a, j;
   printf("Ingrese el número de puntos a imprimir: ");
   scanf("%d", &a);

   if (a < 0) {
      printf("El número de puntos debe de ser mayor o igual a cero. \n");
      return 1;
   }

   for (i =0; i<= a; i++) {
      for (j = 0; j < i; j++)  {
         printf(".");
      }
      printf("\n");
  }

  for (i = a - 1; i >= 0; i--) {
     for (j=0; j < i; j++) {
        printf(".");
     }
     printf("\n");
  }

  return 0;
}
