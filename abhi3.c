#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20];
    int i,b=0;
    printf("input a string of multipole word");
    scanf("%[^\n]",str);
    for(i=0;str[i]!=' ';i++)
    {
        if(str[i]==' ')
        if(str[i+1]!=' ')
        b++;
    }    
    printf("\n no of words in the string=%d",b+1);
    getch();
}
