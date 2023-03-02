#include<stdio.h>
int main()
{
    int i,count=0;
    char s[100];

    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
        {
            printf("%c",s[i]);
        }
    }

    printf("\n");

    return 0;

}

