#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0,len=0;
    char str[100],cmnt1[100],cmnt2[100];
    scanf(" %[^!]",str);
    len=strlen(str);
    for(i=0; i<=len-1; i++)
    {
        if(str[i]=='/'&&str[i+1]=='*')
        {
            i+=2;
            while(str[i]!='*' && str[i+1]!='/')
            {
                cmnt2[k++]=str[i++];

            }
        }
    }
    cmnt2[k]='\0';
    printf("\nComment:%s\n",cmnt2);
    return 0;

}

