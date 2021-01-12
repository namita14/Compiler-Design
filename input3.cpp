#include<stdio.h>
#include<string.h>

int main(){
	char str[10];
	char keyword[32][10]={
	"for","do","If","int"
	};
	printf("Enter any string: ");
	gets(str);
	int flag=0,i,state=1;
	if((str[0]=='f') || (str[0]=='d') || (str[0]=='i') || (str[0]=='I')){
		state =2;
		if (str[0]=='f'){
			if(str[1]=='o'){
				state = 3;
				if(str[2]=='r'){
					if(str[3]=='\0'){
						state=100;
					}
				}
				else{
					state = 99;
				}
			}
			else{
				state = 99;
			}
		}
		else if(str[0]=='d'){
			if(str[1]=='o'){
				if(str[2]=='\0'){
					state = 100;
				}
				else{
					state = 99;
				}
			}
			else{
				state =99;
			}
		}
		else if(str[0]=='I'){
			if(str[1]=='f'){
				if(str[2]=='\0'){
					state = 100;
				}
				else{
					state = 99;
				}
			}
			else{
				state = 99;
		   }
	    }
	    if(str[0]=='i'){
			if(str[1]=='n'){
				state = 3;
				if(str[2]=='t'){
					if(str[3]=='\0'){
						state = 100;
					}
				}
				else{
					state = 99;
				}
			}
			else{
				state =99;
		   }
	    }
	}
else{
	state = 99;
}
if(state == 100)
	printf("%s is a keyword", str);
else
	printf("%s is not a keyword", str);
}
