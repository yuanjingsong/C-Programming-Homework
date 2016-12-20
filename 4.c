#include<stdio.h>
int n; //The number of the students.
struct Students
{
    int Stu_Id;
    char Stu_Name[5];
    int Total;
    int Average;
    int Grades[8];
}
void sort_order (struct Students students[])
{      
    int i, j;
    for (i = 0; i < n - 1; i++ ){
        for(j = n-1 ; j > i ; j--){
            if(students[j].Total < students[j - 1].Total){
                struct Students t;
                t = students[j];
                students[j - 1] = students[j];
                students[j] = t;
            }
        }
    }
}
void check_number(struct Students students[],int num)
{
    int i, j;
    for(i = 0; i < n; i++){
        if(students[i].Stu_Id == num){
            printf("%d",students[i].Stu_Id);
            for(j = 0; j < 5;j++){
                printf("%c",students[i].Stu_Name[j]);
            }
            printf("%d %d",students[i].Total students[i].Average)
            for(j = 0 ;j < 8;j++){
                printf("%d",students[i].Grades[j]);
            }
        }
    }
}
main()
{
    struct Students students[n];

}