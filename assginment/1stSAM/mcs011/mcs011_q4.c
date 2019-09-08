#include<stdio.h>
#include<string.h>
// A program which reads characters from a string and calculates the number of
// vowels in it. It should print the string and the number of vowels in it.
//
void func_countVovel()
	{ 
	int count = 0, len = 0;
	char str[20], vovel[20];
	printf("\n Please provide a string - ");		
	scanf("%s",&str);

int i = 0;
len = strlen(str);
for(count=0;count<len;count++)
		{
	if(str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || str[count] == 'o' || str[count] == 'u' || str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || str[count] == 'O' || str[count] == 'U')
	{
	//printf("\n found vovel \'%c\' at place %d",str[count],count);
	vovel[i] = str[count];
	i++;
	} // if end
	} // for end
printf("\n Given string is - %s",str);
printf("\n founded vovel is - %s",vovel);
	} // function end

void main() 
{
func_countVovel();
printf("\n");
} // main end
