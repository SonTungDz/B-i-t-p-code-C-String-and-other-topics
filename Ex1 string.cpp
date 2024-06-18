#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char a[101];
	scanf("%s", a);
	int count = 0;
	int letters = 0;
	for(int i = 0; i < strlen(a); i++){
		if((a[i] >= 48) && (a[i]<= 57)){
			count++;
		}
		if((a[i]>= 'A') && (a[i]<= 'Z') ){
			letters++;
		}
		if((a[i]>= 'a') && (a[i]<= 'z') ){
			letters++;
		}
	}
	if(count == letters){
		printf("0");
	} else if(count < letters ){
		printf("1");
	} else {
		printf("2");
	}
	return 0;
}
