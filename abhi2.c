#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    int i,j;
    printf("Input a string :");
    scanf("%[^\n]",s1);
    for(i=0;s1!='\0';i++);
    for(i=i-1,j=0;i>=0;i--,j++)
       {
        s2[j]=s1[i];
       }
    s2[j]='\0';
    for(i=0;s2[i]!='\0';i++)
       {
        s1[i]=s2[j];
       }
    s1[i]='\0';
    printf("\n Reverse of string is %s",s1);
    getch();
}