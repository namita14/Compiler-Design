#include<stdio.h>

#include<string.h>

int top;

char s[10];

char data;

void push(int x)

{

  s[top++]=x;

}

char pop()

{

  data = s[--top];

  return data;

}

int main()

{

  int i=0,n,state=0;

  char a[10],x;

  printf("Program For PDA Which Accpets Strings Of WCW^r\n");

  printf("Enter String:");

  scanf("%s",a);

  n=strlen(a);

  top=-1;

  while(a[i]!='c'){

    if(a[i]=='a'||a[i]=='b'){

      state=0;

      push(a[i]);

      i++;

    }

    else{

      state=99;

      break;

    }

  }

  if(a[i]=='c' && state==0){

    state=1;

    i++;

  }

  while(a[i]!='\0' && state==1){

    x=pop();

    if(a[i]==x)

      state=1;

    if(a[i]!=x){

      state=99;

      break;

    }

    i++;

  }

  if(state==1 && a[i]=='\0')

    state=100;

  if (state==100)

    printf("String Accepted.");

  else

    printf("String Rejected.");

  return 0;

}
