#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<stdlib.h>

void main()

{

  char s[20],c;

  int state=0,i=0;

  printf("Enter a string:");

  gets(s);

  while(s[i]!='\0')

  {

    switch(state)

    {

    case 0:

      c=s[i++];

      if(c=='b')

        state=1;

      else if(c=='c')

        state=2;

      else

        state=6;

      break;

    case 1:

      c=s[i++];

      if(c=='b')

        state=1;

      else if(c=='c')

        state=2;

      else

        state=6;

      break;

    case 2:

      c=s[i++];

      if(c=='b')

        state=6;

      else if(c=='c')

        state=2;

      else

        state=6;

      break;

    case 6:

      printf("%s is not recognised.",s);

      exit(0);



    }

  }

  if(state!=6)

    printf("%s is accepted under rule 'b*c*'",s);

  else

    printf("%s is not recognised.",s);

}
