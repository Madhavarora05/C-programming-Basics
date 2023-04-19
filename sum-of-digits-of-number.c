//print sum of digits of number
#include <stdio.h>
int main(){
    int num,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num!=0){
        n=num%10;
        sum=sum+n;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}