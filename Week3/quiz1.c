#include<stdio.h>

int main(){
    float Programming = 4.0;
    float Drawing = 3.5;
    float Mechanics = 3.5;
    float Math = 3.0;
    float GPS = 3.5;

    printf("%-12s:A\n","programming");
    printf("%-12s:B+\n","Drawing");
    printf("%-12s:B+\n","Mechanics");
    printf("%-12s:B\n","Math");
    printf("%-12s:%.2f\n","GPS", GPS);

    return 0;
}