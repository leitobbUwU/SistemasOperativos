#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

long int factorial (int n)
{
  long int resultado = 1;
  int num;

  for (num = 2; num <=n; num++)
  {
    resultado = resultado * num;
    printf("Factorial de %d, resultado parcial %d\n", n, resultado);
    sleep(2);
  }
  return resultado;
}

void factoriales(int n)
{
    printf("El factorial de %d es %d\n", n, factorial(n));
}
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	pid_t pid = fork();
	if (pid ==0)
	{
	  factoriales(num1);
	}
	else if (pid > 0)
	{
	  factoriales(num2);
	}
	else
	{
	printf("Error al crear el proceso hijo. \n");
	return 1;
	}
    }
    else
    {
        printf("Se requieren dos argumentos. \n");
    }
    return 0;
}
