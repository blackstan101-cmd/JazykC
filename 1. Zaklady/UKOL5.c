#include <stdio.h>

void print_first_last(int n)
{
    printf("prvni: %i, posledni: %i\n", n / 100, n % 10);
}

int main(){
    int n = 666;
    printf("%d\n", n);
    print_first_last(n);
    return 0;
}