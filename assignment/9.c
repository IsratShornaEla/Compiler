#include<stdio.h>
int main()
{
    int j,i,n;
    char a[100];
    printf("Enter the number you want to take input:");
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf(" %[a-zA-Z]",a);
        printf("output:");

        for(i=0; a[i]!='\0'; i++)
        {
            if(a[i]=='z')
            {
                a[i]='c';
            }
            else if(a[i]=='y')
            {
                a[i]='b';
            }
            else if(a[i]=='x')
            {
                a[i]='a';
            }
            else  if(a[i]=='Z')
            {
                a[i]='C';
            }
            else  if(a[i]=='Y')
            {
                a[i]='B';
            }
            else   if(a[i]=='X')
            {
                a[i]='A';
            }
            else
                a[i]=a[i]+3;

            printf("%c",a[i]);
        }
         printf("\n");
    }

    return 0;
}




