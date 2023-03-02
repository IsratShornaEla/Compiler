//reverse string

#include<stdio.h>
main()
{ int i,count=0,j;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      count++;
    }
    printf("%d\n",count);

    for(j=(count-1);j>=0;j--)
    {
        printf("%c",s[j]);

    }

    return 0;

}
