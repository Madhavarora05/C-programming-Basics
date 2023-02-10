#include <stdio.h>
int main(){
    char a[50];
    printf("Enter name :");
    // scanf("%s",&a);
    scanf("%[^\n]%*c",a);
    printf("%s",a);
    return 0;
}