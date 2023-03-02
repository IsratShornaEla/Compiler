#include<stdio.h>
int main()
{
    int i;
    char str[500];
    gets(str);
    for(i=0 ; str[i]='\0'; i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        else if(((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && (str[i+1]=='+' ||str[i+1]=='-') && (str[i+2]=='+' ||str[i+2]=='-'))
        {

            printf("%c%c%c",str[i],str[i+1],str[i+2]);
            i+=2;

        }
        else if(((str[i]=='+' ||str[i]=='-') && (str[i+1]=='+' ||str[i+1]=='-'))&&((str[i+2]>='a' && str[i+2]<='z') || (str[i+2]>='A' && str[i+2]<='Z')) )
        {

            printf("%c%c%c",str[i],str[i+1],str[i+2]);
            i+=2;

        }
        else if((str[i]>='0' && str[i]<='9'))
        {
            while((str[i]>='0' && str[i]<='9'))
            {
                printf("%c",str[i]);
                i++;
            }
            i--;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            while((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            {
                printf("%c",str[i]);
                i++;
            }
            i--;
        }
        else
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
