#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    char input[100] ;
     printf("Enter a string: ");
    scanf("%s", input);
    char output[100];
    printf("enter the your question output:");
    scanf("%s",output);
    int length = strlen(input);
    int i;
    for (i=0;i<=length;i++){
    	if (input[i] !='0' && input[i] !='1')
    	{
    		printf("you entreded the input: ");
    		break;
		}
    }
    char str[100];
    int len=strlen(input);
    if (input[0]=='0' && input[length-1] =='1' && input[i] != 'a' && input[i] != 'b' || input == output)
    {
    	printf("accepted");
	}
	else
	{
		printf("not accepted");
	}
    return 0;
}
