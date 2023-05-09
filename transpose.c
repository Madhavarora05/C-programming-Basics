#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows columns of matirx : ");
    scanf("%d %d",&r,&c);
    printf("Enter elements:\n");
    int arr[r][c],trans[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)scanf("%d", &arr[i][j]);
    }
    printf("Resultant matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)printf("%d ",arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)trans[j][i]=arr[i][j];
    }
    printf("Transpose of matrix:\n");
     for (int i = 0; i < c; i++)
    {
        for (int j = 0; j <r; j++)printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}