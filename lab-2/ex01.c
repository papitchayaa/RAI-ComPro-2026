#include<stdio.h>

int main(){
    int number;
    float value;
    char character;

    printf ("Please enter an integer value: ");
    scanf ("%d",&number);
    printf("You entered %d\n", number);

    printf ("Please enter a float value: ");
    scanf ("%f",&value);
    printf("You entered %0.1f\n", value);

    printf("Please enter a character: ");
    scanf(" %c",&character);
    printf("You entered %c\n", character);


    return 0;
}