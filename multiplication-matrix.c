#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the number of rows colums of 1st matrix= ");    
    scanf("%d %d",&r1,&c1); 
    printf("enter the number of row colums of 2nd matrix= ");    
    scanf("%d %d",&r2,&c2);
    if(c1==r2){
    int arr[10][10], b[10][10], multi[10][10];
    printf("Enter 1st matrix element:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)scanf("%d", &arr[i][j]);
    }
    printf("1st matirx :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("Enter 2nd matrix element:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)scanf("%d", &b[i][j]);
    }
    printf("Results of b:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)printf("%d ", b[i][j]);
        printf("\n");
    }
    printf("Multiplication of matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            multi[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                multi[i][j] += arr[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
    
}
else{
    printf("Multiplication not posibble\n");
    main();
}
return 0;
}