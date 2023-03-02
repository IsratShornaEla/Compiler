#include<stdio.h>
int main()
{
    int i,count=0;
    char s[100];

    scanf("%[^#]",s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='\n')
        {
            ++count;
        }

    }
    printf("\nOUTPUT:");
    printf("\nNumber of Line: %d\n",count+1);

    return 0;
}



