#include<stdio.h>
int main()
{
    int i;
    char a[100000];
    gets(a);
    for(i=0 ; a[i]!='\0' ; i++);
        printf("Length = %d\n",i);

    return 0;
}
