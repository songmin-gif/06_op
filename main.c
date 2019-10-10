#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo (int a, int b)
{
		//int output;
		//output= a+b;
		return a+b;//output;
}

int square(int n)
{
	return (n*n);
}

int get_max (int a, int b)
{
	if (a>b)
		return (a);
	else return (b);
}
int main(int argc, char *argv[]){

	
	int x,y;
	int output, out, result;
	int q = 7;
	int alpha =4, beta=6;
	
	
	x=2;
	y=5;
	
	out= square(q);
	output = sumTwo(x,y);
	result= get_max(alpha,beta);
	printf("sumTwo : %i\n", output);
	printf("square :%i\n", out);
	printf("get_max:%i\n",result);

	return 0;
}
