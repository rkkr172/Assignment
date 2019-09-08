#include<stdio.h>
#include<math.h>

///*
void func_sum()
{ int a,b;
printf("Input two integer for sum\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Sum of two integer is : %d\n", a+b);
}

void func_remainder()
{ int a,b;
printf("Input two integer for remainder\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Sum of two integer is : %d\n", a%b);
}
void func_product()
{ int a,b;
printf("Input two integer for product\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Product of two integer is : %d\n", a*b);
}
void func_TwiceWord()
{ char str[10];
printf("Input one word for Twice printing\n");
scanf("%s",&str);
printf("Twice of word printing here : %s%s\n", str,str);
}

void main()
{
int c;
printf("1-sum,2-remainder,3-product,4-twiceword");
scanf("%d",&c);
switch(c)
	{
	case 1: func_sum();
		break;
	case 2: func_remainder();
		break;
	case 3: func_product();
		break;
	case 4: func_TwiceWord();
		break;
	default:
		printf("Wrong Choice !\n");
		break;
	}
}
