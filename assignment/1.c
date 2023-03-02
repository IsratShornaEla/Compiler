#include<stdio.h>
int main()
{
    int i,j,length=0;
    char a[100];
    gets(a);

    for(i=0 ; a[i]!=0 ; i++);
    printf("Length : %d\n",i);

    printf("Reverse : Length : %d\n",i);
    printf("Hello %s, ",a);

    for(j=(i-1); j>=0; j--)
        printf("%c",a[j]);

    printf(" is your reverse\n");


    return 0;
}
