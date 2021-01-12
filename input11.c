#include<stdio.h>

#include<string.h>

int top;

char s[10];

void push(int x)

{

  s[top++]=x;

}

void pop()

{

  top--;

}

int main()

{

  int i,n;

  char a[10];

  printf("Program For PDA Which accepts string w with equal number of a's and b's.\n");

  printf("Enter String:");

  scanf("%s",a);

  n=strlen(a);

  top=-1;

  for(i=0;i<n;i++)

  {

    if(a[i]=='a')

    {

      push(a[i]);

    }

    else if(a[i]=='b')

    {

      pop();

    }

    else

    {

      break;

    }

  }

  if(top==-1)

  {

    printf("String Accepted.");

  }

  else

  {

    printf("String Rejected.");

  }

  return 0;
  
}
