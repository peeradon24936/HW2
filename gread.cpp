#include <stdio.h>
int main(){
	int number;
	printf("enter your scor:");
	scanf("%d",&number);
	if(number>=80&&number<=100){
	printf("your scor a");
	}else if(number>=75 &&number<=79){
		printf("your scor b+");
	}else if(number>=70&&number<=74){
		printf("your scor b");
	}else if(number>=65&&number<=69){
		printf("your scor c+");
	}else if(number>=60&&number<=64){
		printf("your scor c");
	}else if(number>=55&&number<=59){
		printf("your scor d+");
	}else if(number>=50&&number<=54){
		printf("your scor d");
	}else if(number>=0&&number<=49){
		printf("your scor f");
	}else if(number>=-1||number>=101){
		printf("system eror");
	}
	return 0;
}
