#include<stdio.h>
void main(){

    system("cls");

    int base,exp;
    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter exponent: ");
    scanf("%d",&exp);

    cal_power(base,exp);
}

void cal_power(int base, int exp){
    int power =1,mexp = 0;
    mexp = mexp + exp;
    while (exp>0)
    {
        power = power * base;
        exp--;
    }
    printf("The power of %d ^ %d = %d",base,mexp,power);
}
