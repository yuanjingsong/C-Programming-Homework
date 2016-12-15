#include <stdio.h>

int dr[] = {1,0,-1,0};
int dc[] = {0,1,0,-1};
int n;
int main()
{
	int i = 1;
	int d = 0;
	int r,c;
	r = -1;
	c = 0;
	int new_r = 0;
	int new_c = 0;
	int a [15][15] = {0};
	printf("Please input the number\n");
		scanf("%d",&n);
	int total = n * n;
	while (i <= total)
	{	
		new_r = r + dr[d];
		new_c = c + dc[d]; 
		if( !a[new_r][new_c]  && new_r < n && new_c < n && new_r >= 0 && new_c >= 0) 
		{	
			a[new_r][new_c] = i++;	
			r = new_r;
			c = new_c;	
		}
		else 
		{d++;
		d = d % 4;	
		}
	}
	for(i = 0;i < n; i++)
	{	
	{	for( d = 0; d < n; d++)
			printf("%3d", a[i][d]);	
		}
	printf("\n");}	 
}
