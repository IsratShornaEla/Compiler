//Count character without white space
#include<stdio.h>

int main()
{ int i,count=0;
    char s[100];
    printf("Enter the string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            count++;
        }
    }
    printf("Result: %d\n",count);
    return 0;
}
