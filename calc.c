#include <stdio.h>

void menu()
{
	printf("\nAvailable options:\n");
	printf("(+),\n");
	printf("(-),\n");
	printf("(*),\n");
	printf("(/),\n");
	printf("(a)verage\n");
	printf("Select option: ");	
}

int main()
{
	int a, b, total;	// + - * / functions variables
	int c, d, e, f, g, average, min = 100000000, max = 0;	// average and minimum/maximum variales
	int numbers = 0;
	char option;

	menu();		//prints menu
	scanf("%c", &option);
	
	printf("enter a: ");
	scanf("%i", &a);
	printf("enter b: ");
	scanf("%i", &b);
	
	printf("\navailable options (+), (-), (*), (/), (a)verage, (m)aximum/minimum\nselect option: ");
	scanf("%c", &option);
	
	switch(option){
	case '+': printf("enter a: ");
		  scanf("%i", &a);
		  printf("enter b: ");
		  scanf("%i", &b); 
		  total = a + b;
		  printf("%i\n", total);
		  break;
	case '-': printf("enter a: ");
		  scanf("%i", &a);
		  printf("enter b: ");
		  scanf("%i", &b);  
		  total = a - b;
		  printf("%i\n", total);
		  break;
	case '*': total = a * b;
		  printf("%i\n", total);
		  break;
	case '/': total = a / b;
		  printf("%i\n", total);
		  break;
	case 'a':
	case 'A': printf("Enter 5 numbers:\n");
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
		  average = (c + d + e + f + g)/5;
		  printf("\nAverage is: %i\n", average);
		  break;
	case 'm':
	case 'M': printf("Enter 5 integers: ");

		  do{	  
		      if (scanf(" %i", &a)==1){  
		      	      if(a>max){	  
		      	      max = a;
		      	      }
		  
		      	      if(a<min){
		      	          min = a;
		      	      }
		      	      numbers++;
		      }

		  } while(numbers!=5);
		  
		  printf("Your largest number was %i. Your smallest number was %i.\n", max, min);  
		  break;
	default: printf("error\n");
	}	
}
