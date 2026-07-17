#include<stdio.h>

int main(){

    int total_minutes;
    int hours;
    int minutes;

    printf("Enter total_minutes: ");
    scanf("%d", &total_minutes);

    printf("%d minutes is %d hour(s) and %d minutes(s)\n", total_minutes, total_minutes/60, total_minutes % 60);


    return 0;

}