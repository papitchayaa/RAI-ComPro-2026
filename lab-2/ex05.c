#include<stdio.h>

int main(){

    char name[50], univ[50], lastname[50];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf("%s %s", name,lastname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf(" %s", univ);

    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old and  my height is %.1f cm tall.\n", lastname[0], name, univ, age, height);


    return 0;

}