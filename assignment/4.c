#include<stdio.h>
int main()
{
    int i,count=0,cnst=0,digt=0;
    char s[100];

    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
            else
            {
                cnst++;
            }

        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                count++;
            }
            else
            {
                cnst++;
            }

        }

        else if(s[i]>='0' && s[i]<='9')
        {
            digt++;
        }

    }
    printf("\nOUTPUT:");
    printf("\nVowel:%d\n",count);
    printf("Consonant :%d\n",cnst);
    printf("Digit:%d\n",digt);

    return 0;
}

