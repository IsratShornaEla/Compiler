//the bdsusd then theryby sbthe them mthek the the eiwwhstheb tenu theu the
//the the them tthee ththe erthemn rtdthe the the raaaaaathe the
//the them tthe tthem the/ /the /the' the thefudfh tjds the
//a amina tam rsa a anty 'a 'a' a' sjeuajsjauj a a
//a amina tam rsa a anty 'a 'a' a' sjeuajsjauj a a the them tthe tthem the/ /the /the' the thefudfh tjds the
#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,the=0,an=0,A=0;
    char a[100];
    gets(a);
    for(i=0 ; a[i]!='\0'; i++)
    {
        if((a[i]<65 || a[i]>90) && (a[i]<97 || a[i]>122))
        {
            if((a[i-1]=='e' && a[i-2]=='h' && (a[i-3]=='T' || a[i-3]=='t')&&((a[i-4]<65 || a[i-4]>90) && (a[i-4]<97 || a[i-4]>122)))||(a[i-1]=='e' && a[i-2]=='h' && (a[i-3]=='T' || a[i-3]=='t')&&i-3==0))
            {
                the++;
                count++;
            }

            else if((a[i-1]=='n' && (a[i-2]=='a' || a[i-2]=='A')&&((a[i-3]<65 || a[i-3]>90) && (a[i-3]<97 || a[i-3]>122)))||(a[i-1]=='n' && (a[i-2]=='a' || a[i-2]=='A')&&i-2==0))
            {
                an++;
                count++;
            }


            else if(((a[i-1]=='a' || a[i-1]=='A')&&((a[i-2]<65 || a[i-2]>90) && (a[i-2]<97 || a[i-2]>122)))||((a[i-1]=='a' || a[i-1]=='A')&&i-1==0))
            {
                A++;
                count++;
            }

        }
    }
        printf("a = %d\nan = %d\nthe = %d\n",A,an,the);
    printf("there are %d article in the string\n", count);
    return 0;
}


//******************
// siam's code     |
//******************
