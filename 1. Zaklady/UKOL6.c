#include<stdio.h>
#include <math.h>

void print_parts(double x)
{
    double ip;
    double fp = modf(x, &ip);
    printf("cela: %.0f, desetinna: %f\n", ip ,fp);
}

int main(){
    double x = 123.456;
    printf("%f\n", x);
    print_parts(x);
    return 0;
}
