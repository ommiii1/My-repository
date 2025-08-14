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
    struct student student1;
    printf("Enter id: ");
    scanf("%s",&student1.id);

    printf("\nEnter name: ");
    scanf("%s",&student1.name);

    printf("\nEnter age:");
    scanf("%d",&student1.age);

    printf("\nEnter score");
    scanf("%d",&student1.score);

    printf("id:%s\n",student1.id);
    printf("name:%s\n",student1.name);
    printf("age:%d\n",student1.age);
    printf("score:%d\n",student1.score);
}
