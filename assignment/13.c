#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,len=0;
    char str[100],cmnt1[100];
    scanf(" %[^!]",str);
    len=strlen(str);
    for(i=0; i<=len-1; i++)
    {

        if(str[i]=='/'&&str[i+1]=='/')
        {
            i+=2;
            while(str[i]!='\n')
            {
                cmnt1[j++]=str[i++];
            }
        }

    }
    cmnt1[j]='\0';
    printf("\ncomments:%s\n",cmnt1);

    return 0;
}
