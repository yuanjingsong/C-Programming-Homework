#include<stdio.h>
#define Number 5
main()
{
	int i ,j,now_length,k,temp,test;
	int a[Number] = {0};
	now_length = 0;
	printf("Please input a number\n");
		scanf("%d", &a[0]);
	printf("Please use the enter to divide your input number \n");
	for(i = 1;i < Number && (scanf("%d", &temp) && temp != ' '); i++){	
		for( j=0; j <= now_length; j++ ){
			if(temp < a[j]){		
				for( k = now_length + 1; k > j ;k-- ){
					a[k] = a[k-1];
				}
			a[j] = temp;
			break;
			}
			if((temp >= a[j]) && j==now_length){
				a[now_length + 1] = temp;
				break;
			}			
		}
		now_length++;
	}
	for(i = 0; i< Number; i++)
	{
		printf("%3d",a[i]);
	}
}
