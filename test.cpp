#include<stdio.h>
#include<string.h>
#define MAX 100
main()
{
	char user_put[MAX];
	char for_cond[MAX];
	char t[2];
	char ch;
	int i = 0;
	int length,num ;
	num = 1;
	printf("Please input the string for condense.Use enter for quit\n");
	scanf("%s",user_put);	
	length = strlen(user_put);
	do{
	for_cond[i] = user_put[i];
	while(user_put[i] == user_put[i++]){
		t[0] = user_put[i];
	}
	}while(i <length)
}


