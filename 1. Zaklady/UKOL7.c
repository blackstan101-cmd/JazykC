#include<stdio.h>

int get_bit(unsigned int x, int i)
{
    return (int)((x >> i) & 1u);
}

int main(){
    unsigned int x = 256 + 16 + 1;
    int b;
    
    for (int i = sizeof(unsigned int)*8-1; i >=0 ; i--)
    {
        b = get_bit(x,i);
        printf("%d",b);
    }
    return 0;
}
