//string compare

#include<stdio.h>
main()
{ int i,count=0,count1=0,j=0;
    char s[100],e[100];

    printf("Input first string :");
    gets(s);
    printf("Input second string :");
    gets(e);

    for(i=0;s[i]!='\0';i++)
    {
      count++;
    }
    for(i=0;e[i]!='\0';i++)
    {
      count1++;
    }
    printf("length on first string is :%d\n",count);
    printf("length on second string is :%d\n",count1);

    if(count==count1)
    {
       for(i=0;i<count;i++)
    {
      if(s[i]!=e[i])
      {

           printf("the two strings do not match \n");
           break;

      }
      else
      {
          j=1;
      }
    }
    if(j==1)
        {printf("the two strings  match \n");}


    }
    else{
        printf("the two strings do not match \n");
    }


    return 0;

}
