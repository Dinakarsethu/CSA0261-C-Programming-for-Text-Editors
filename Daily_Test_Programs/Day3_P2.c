#include <stdio.h>
#include <string.h>

char check(char n1[100],char n2[100]);
void main()
{
	char n1[100], n2[100];
	printf("Enter the String 1: ");
    scanf("%c",&n1);
    printf("Enter the String 2: ");
    scanf("%c",&n2);
	
    check(n1,n2);
}
char check(char n1[100],char n2[100])
{
    if ((*n1)==(*n2)) {
		printf("both string are same");
	}
	else {
		printf("both string are not same");
	}
}