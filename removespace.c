#include<stdio.h>
int main()
{
    int i=0,count=0;
    char str[100];
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        i++;
    }

    return 0;
}
