#include <stdio.h>
int sumar(int a, int b) {
  return a + b;
}
 
int restar(int a, int b) {
  return a - b;
}

int main(){
  printf("La suma de 12+3 es: %d\n", sumar(12,3));
  printf("La resta de 12 y 3 es: %d\n", restar(12,3));
  return 0;
}
