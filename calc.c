#include <stdio.h>

int main()
{
	int a, b, total;
	char option;
	
	
	printf("\navailable options (+), (-), (*), (/)\nselect option: ");
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
	default: printf("error\n");
	}
				
}
