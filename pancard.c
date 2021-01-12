#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int RE(char s[20]){
    int i,c;
    for(i=0;i<5;i++){
        if ((s[i]>='A') && (s[i]<='Z'))
        {
            c++;
        }
        else
            return 1;
    }
    for(i=5;i<9;i++){
        if ((s[i]>=0) && (s[i]>=9))
        {
            c++;
        }
        else
            return 1;
    }
    if(i==9){
        if ((s[i]>='A') && (s[i]<='Z'))
        {
            c++;
        }
        else
            return 1;
    }
    return 0;
}
void main()
{
    char s[20],c;
    int state=0,i=0;
    printf("Enter a string:");
    gets(s);
    if(strlen(s)==10){
        int o=RE(s);
        if (o==0){
            printf("String is a valid Pan Card number.");
            exit(0);}
        else
            printf("String is not a valid Pan Card number.");
    }
    else
        printf("String is not a valid Pan Card number.");
}
