#include<stdio.h>
int main()
{
    int i,n;
    char s[100];

for(i=0;i<3;i++)
{
    scanf("%c",&s[i]);
}
scanf("%d",n);
for(i=0;i<3;i++)
{
    printf("output:%c",s[i]+n);
}
return 0;
}
