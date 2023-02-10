//write a program to check wheter numbber is divisble by 5 or not
#include <stdio.h>
int main(){
    int num;
    printf("Enter Num: ");
    scanf("%d",&num);
    (num%5==0)?printf("%d is divisible by 5",num):printf("%d is not divisible by 5",num);
    return 0;
}