//string count
#include<stdio.h>
main()
{ int i,count=0;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      count++;
    }
    printf("%d",count);

    return 0;

}
