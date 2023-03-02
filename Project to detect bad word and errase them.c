
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE * fPointer;
    fPointer = fopen("Content.txt", "r");
    char input[1000];
    char input2[1000];
    char str1[100], str2[100], str3[100];
    int s, i, j=0, k, l, m, n;
    char str [100][20]= {"Bullshit", "bullshit", "retard", "Retard", "Faggot", "faggot", "fagot", "Fagot", "nigga", "Nigga", "Niggar", "niggar", "niga", "Niga", "Nigger", "nigger", "suck", "Suck", "piss", "Piss", "lolicon", "fuk", "Fuk", "fag", "Fag", "Jerkoff", "jerkoff", "Twat", "twat"};
    while(!feof(fPointer))
    {
        fgets(input, 1000, fPointer);
        strcpy(input2, input);
    }
    s=strlen(input);
    for(i=0; i<s; i++)
    {
        if(input[i]!=32)
        {
            str1[j]=input[i];
            j++;
        }
        if(input[i]==32)
        {
            str1[j]='\0';
            j=0;
            for(k=0; k<29; k++)
            {
                if(strcmp(str1,str[k])==0)
                {
                    l=strlen(str[k]);
                    for (k=i-l; k<i; k++)
                    {
                       input[k]='*';
                    }
                }
            }
            }else if(i==s-1)
        {
            str1[j]='\0';
            j=0;
            for(k=0; k<29; k++)
            {
                if(strcmp(str1,str[k])==0)
                {
                    l=strlen(str[k]);
                    for (k=i-l+1; k<=i; k++)
                    {
                       input[k]='*';
                    }
                }
            }
        }
        }
        printf("%s", input);
        fPointer = fopen("Content.txt", "w");
        fprintf(fPointer, input);
    fclose(fPointer);
    return 0;
}
