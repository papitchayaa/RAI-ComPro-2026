#include<stdio.h>

int main() {
    char name[50], surname[50], id[20];
    int lab, midterm, final, total ;

    printf("Enter your Name Surname: ");
    scanf("%s %s",name,surname);

    printf("Enter your Student ID: ");
    scanf("%s", id);

    printf("Enter your Score\n");
    printf("\tLaboratory (15%) = ");
    scanf("%d",&lab);
    printf("\tMidterm (35%)    = ");
    scanf("%d",&midterm);
    printf("\tFinal (50%)      = ");
    scanf("%d",&final);

    total = lab+midterm+final ;

    printf("Total (100%)             = %d\n",total);

    return 0;

}