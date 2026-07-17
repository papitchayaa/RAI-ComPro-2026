#include<stdio.h>

int main(){
    float point;
    char name[20];
    int x = 10, y = 11;
    printf("Before : %d\n",x);
    y = x++;
    printf("After : x =%d\n",x);
    y = x--;

    return 0;
}