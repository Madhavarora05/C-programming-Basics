#include <stdio.h>
int main()
{
    int testInteger;
    int testInteger1;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    testInteger1=2*testInteger; 
    printf("Number = %d",testInteger1);
    return 0;
}