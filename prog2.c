#include <stdio.h>
#include <unistd.h>
int main() {
  printf ("Hola, somos el grupo S183\n");

  if (fork() == 0)
     printf("Soy el proceso hijo\n");
  else{
     sleep(2);
     printf("Soy el proceso padre\n");
  }

  return 0;

}
