#include<stdio.h>
int main()
{
    int i;
    char str[100];
    scanf(" %[^!]",str);
    printf("Title: ");
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]=='\n')
       {
           break;
       }
       else
       {
           printf("%c",str[i]);
       }
   }
   printf("\n");
   return 0;
}

