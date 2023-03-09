#include<stdio.h>
int main(){

    char name[100];
    double sall,sold,totall;

    scanf("%s%lf%lf",name,&sall,&sold);

    totall = sall + (sold*15/100);

    printf("TOTAL = R$ %.2lf\n",totall);
    return 0;
}
