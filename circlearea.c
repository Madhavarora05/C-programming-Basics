#include <stdio.h>
int main(){
    int r;
    float pi=3.14,area;
    printf("Enter value of Radius: ");
    scanf("%d",&r);
    area=pi*r*r;
    printf("The area of circle of radius %d is : %g",r,area);
    return 0;
}