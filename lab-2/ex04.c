#include<stdio.h>

int main(){

    char name[50];
    int id;
    float pro, phy, cal;

    printf("Enter your Name: ");
    scanf(" %c", name);
    printf("Enter your Student ID: ");
    scanf("%d", &id);
    printf("Enter your Programming score: ");
    scanf("%f", &pro);
    printf("Enter your Physics score: ");
    scanf("%f", &phy);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal);

    printf("Hi M %s(%d)! your GPA is %.2f\n", name, id, ((pro + phy +cal)/3.0));

    return 0;

}