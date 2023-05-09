#include <stdio.h>
int main(){
    int n=10;
    M:
      printf("%d ",n);
      n=n-1;
    if(n>0){
        goto M; 
    }
    return 0;
}