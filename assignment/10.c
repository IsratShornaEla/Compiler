#include<stdio.h>
int main()
{
    int i;
    char a[100];
    gets(a);
    printf("%c",a[0]);
    for(i=1 ; a[i]!='\0'+1; i++)
    {
        if(a[i]==' ')
        {
            printf("%c",a[i+1]);
        }
    }
printf("\n");
    return 0;
}




