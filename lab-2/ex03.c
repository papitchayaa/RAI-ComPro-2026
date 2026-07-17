#include<stdio.h>

int main(){
    char name[10], gender, education[20];
    int age, weight;
    float height;

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", education);

    printf("\nName: %s\nAge: %d\ngender: %c\nheight: %.1f\nweight: %d\nEducation: %s\n", name, age, gender, height, weight, education);


    return 0;

}