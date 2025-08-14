#include<stdio.h>
struct student
{
    char id[50];
    char name[50];
    int age;
    int score;

};
int main()
{
    int i,j;
    printf("Enter number of students:");
    scanf("%d",&i);
    struct student student[i];
    for(j=0;j<1;j++)
    {
        
        printf("Enter id of student %d: ",j+1);
        scanf("%s",&student[j].id);

        printf("\nEnter name of student %d: ",j+1);
        scanf("%s",&student[j].name);

        printf("\nEnter age of student %d: ",j+1);
        scanf("%d",&student[j].age);

        printf("\nEnter score of student %d: ",j+1);
        scanf("%d",&student[j].score);
    }
    for(j=0;j<i;j++)
    {
    printf("id of student %d: ",j+1,student[j].id);
    printf("nameof student %d: ",j+1,student[j].name);
    printf("age of student %d: ",j+1,student[j].age);
    printf("score of student %d: ",j+1,student[j].score);
    }
}
