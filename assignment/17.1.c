#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100];
    int i, j=1,k=0,len, count1=0,  count2=0, count=0;
    gets(a[0]);
    len=strlen(a[0]);
    for(i=0 ; i<len ; i++)
    {
        if(a[0][i]!=' ')
        {
            count1++;
            while(a[0][i]!=' ' && a[0][i]!='\0')
            {
                a[j][k++]=a[0][i++];
            }
        }
        j++;
        k=0;
    }
    for(i=1 ; i<=count1 ; i++)
    {
        for(j=1 ; j<=count1 ; j++)
        {
            if(strcmp(a[i],a[j])==0)
                count2++;
        }
        if(count<count2)
        {
            len=i;
            count=count2;
        }
        count2=0;
    }
    printf("Word: %s\n",a[len],count);

    return 0;
}

