#include <stdio.h>
struct KOCCK{
        int roll_no , reg_no;
        float cgpa;
    };
int main(){
    struct KOCCK O;
    O.roll_no=1;
    O.reg_no=12217099;
    O.cgpa=8.5;
    printf("Roll no %d Reg no %d has cgpa = %f",O.roll_no,O.reg_no,O.cgpa);
    return 0;
}