#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n);

double fibonacciDinamico(int n);

double memo[100];

int main()
{
	int i;
	double fibo;
	
	for(i = 0; i < 100; i++)
	{
		memo[i] = 0;
	}
	
	for(i = 0; i < 100; i++)
	{
		printf("%d", i+1);
		printf(" ---> ");
		printf("%f.0",  fibo = fibonacciDinamico(i));
		printf("\n");
	}
}

double fibonacciDinamico(int n)
{
	if(n <= 1)
	{
		return (double)n;
	}
	
	if(memo[n] != 0)
	{
		return memo[n];
	}
	else
	{
		memo[n] = fibonacciDinamico(n-1)+fibonacciDinamico(n-2);
		return memo[n];
	}
}

/*
int fibonacci(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
*/


