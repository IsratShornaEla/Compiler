// string increment
#include<stdio.h>
int main()
{
    int i,n;
    char s[100];
printf("enter string :");
gets(s);
printf("How much to add :");
scanf("%d",&n);

for(i=0;s[i]!='\0';i++)
{
    printf("output is :%c",s[i]+n);
}
return 0;
}
