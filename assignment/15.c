#include<stdio.h>
int main()
{
    int i,pronoun=0,an=0,A=0;
    char a[100];
    gets(a);
    for(i=0 ; a[i]!='\0'+1; i++)
    {
        if((a[i]<65 || a[i]>90) && (a[i]<97 || a[i]>122))
        {
            if((a[i-1]=='s' && a[i-2]=='i' || a[i-2]=='I')&&((a[i-3]<65 || a[i-3]>90) && (a[i-3]<97 || a[i-3]>122)))||(a[i-1]=='s' && a[i-2]=='i')&&i-2==0))
            {
                the++;
            }

            else if((a[i-1]=='n' && (a[i-2]=='a' || a[i-2]=='A')&&((a[i-3]<65 || a[i-3]>90) && (a[i-3]<97 || a[i-3]>122)))||(a[i-1]=='n' && (a[i-2]=='a' || a[i-2]=='A')&&i-2==0))
            {
                an++;
               }


            else if(((a[i-1]=='a' || a[i-1]=='A')&&((a[i-2]<65 || a[i-2]>90) && (a[i-2]<97 || a[i-2]>122)))||((a[i-1]=='a' || a[i-1]=='A')&&i-1==0))
            {
                A++;
            }

        }
    }
        printf("\nArticle: a, an, the\nA-%d\nAn-%d\nThe-%d\n",A,an,the);
    return 0;
}



