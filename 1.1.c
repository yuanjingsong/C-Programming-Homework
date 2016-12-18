#include <stdio.h>
#define Number 5
int main()
{
    int a[Number] = {0};
    int i, new_coming,j,location ;
    printf("input a number\n");
    scanf("%d", &a[0]);
    for(i = 1; i < Number; i++ )
    {
        scanf("%d",&new_coming);
        for(j = 0; j < i; j++){   
            if(new_coming < a[j])
            {location = j;
            break;
            }
        }
        for(j = i; j >= location; j--){
            if(i == Number - 1)
            {
                j = j-1; 
            }
            a[j+1] = a[j];
        }
        a[location] = new_coming;
    }
    for(i = 0; i< Number; i++)
    {
        printf("%3d",a[i]);
    }
}