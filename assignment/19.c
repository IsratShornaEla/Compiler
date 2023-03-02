#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,n,len=0,k=0;
    char s[100][100],a[1000][1000];
    printf("number of string :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf(" %[^\n]",s[i]);
    }
    for(i=0; i<n; i++)
    {
        len=strlen(s[i]);
        for(j=0; j<len; j++)
        {
            a[0][k]=s[i][j];
            k++;
        }
        if(a[0][k-1]!=' ')
            a[0][k++]=' ';
    }
    printf("%s\n",a);
    return 0;

}

