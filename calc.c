#include <stdio.h>

int main()
{
	int a, b, total;
	int c, d, e, f, g, average;
	char option;
	
	
	printf("\navailable options (+), (-), (*), (/), (a)verage\nselect option: ");
	scanf("%c", &option);
	printf("enter a: ");
	scanf("%i", &a);
	printf("enter b: ");
	scanf("%i", &b);
	


	
	switch(option){
	case '+': total = a + b;
		  printf("%i\n", total);
		  break;
	case '-': total = a - b;
		  printf("%i\n", total);
		  break;
	case '*': total = a * b;
		  printf("%i\n", total);
		  break;
	case '/': total = a / b;
		  printf("%i\n", total);
		  break;
	case 'a': printf("Enter 5 numbers:\n");
		  printf("Number 1: ");
		  scanf("%i", &c);
		  printf("Number 2: ");
		  scanf("%i", &d);
		  printf("Number 3: ");
		  scanf("%i", &e);
		  printf("Number 4: ");
		  scanf("%i", &f);
		  printf("Number 5: ");
		  scanf("%i", &g);
		  average = (c + d + e + f + g)/2;
		  printf("\nAverage is: %i\n", average);
		  break;
	default: printf("error\n");
	}
				
}
