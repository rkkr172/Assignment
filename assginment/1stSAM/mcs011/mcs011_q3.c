#include<stdio.h>
//Request the user to input to input a 5 digit number and reverse the given number and print it.
void func_rev(){
	int n, rev_num = 0, rem;
	printf("\n Please Input a number - ");
	scanf("%d",&n);

	while(n!=0) {
		rem = n%10;
		rev_num = rev_num *10 + rem;
		n = n/10;
		}
	printf("Reversed number is - %d ", rev_num);
	}
//Request the user to input two floats and outputs the largest of the inputs.
void func_largeInput() {
	float a,b;
	printf("Input two float number - ");
	scanf("%f %f",&a,&b);
if( a > b) 
	{
	printf("largest input is - %f", a);
	}
else	
	{
	printf("largest input is - %f",b);
	}
} //function ended

//Request the user to input an integer and, if the number is divisible by two, divides it by
//two, otherwise multiplies it by three and output the result.
void func_intinput(){
int num;
printf("Please input a integer number - ");
scanf("%d",&num);
if( num%2 == 0 )
	{ printf("\nOutput After dividing by 2 - %d\n",(num/2));}
else
	{printf("Output multiply by 3 - ",(num*3));}
	}  //function ended

//Request the user for three integers and output whether any of them are equal. Use only
//one if-else-statement
void func_ThreeIntInput(){
int a,b,c;
printf("Input three number - ");
scanf("%d%d%d",&a,&b,&c);
if ( a == b | b == c | a == c)
	{printf("One of them are equal");}
else
	{printf("None of them are equal");}
}

void main(){
// Program to provide the above functions as options to the user using
// switch statement and perform the functions accordingly
int x;
printf("\n1.Output: reverse the given number");
printf("\n2.Output is largest of the inputs");
printf("\n3.Output: if the number is divisible by two, divides it by two, otherwise multiplies it by three");
printf("\n4.Output whether any of them are equal.");
printf("\n\nPlease provide your choice in number - ");
scanf("%d",&x);
switch(x)	
	{
	case 1: func_rev();
		break;
	case 2: func_largeInput();
		break;
	case 3: func_intinput();
		break;
	case 4: func_ThreeIntInput();
		break;
	default:
		printf("You have made wrong choice.");
		break;
	}
	}
