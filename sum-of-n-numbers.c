#include <stdio.h>
int main(){
    int a,sum;
    printf("Enter Number: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        sum+=i;
        if (i==a){
            printf("%d =",i);
        }
        else{
            printf("%d + ",i);
        }
    }

    printf("%d",sum);
    return 0;
}