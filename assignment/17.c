#include<stdio.h>
#include<string.h>
int main()
{
    char b[100][100];
    int i, j=1, x, ct1=0, k=0, ct2=0, ct=0;
    gets(b[0]);
    x=strlen(b[0]);
    for(i=0 ; i<x ; i++)
    {
        if(b[0][i]!=' ')
        {
            ct1++;
            while(b[0][i]!=' ' && b[0][i]!='\0')
            {
                b[j][k++]=b[0][i++];
            }
        }
        j++;
        k=0;
    }
    for(i=1 ; i<=ct1 ; i++)
    {
        for(j=1 ; j<=ct1 ; j++)
        {
            if(strcmp(b[i],b[j])==0)
            {
                ct2++;
            }
        }
        if(ct2>ct)
            {
                x=i;
                ct=ct2;
            }
        ct2=0;
    }
    printf("Word: %s\nFreq : %d\n",b[x],ct);

    return 0;
}
