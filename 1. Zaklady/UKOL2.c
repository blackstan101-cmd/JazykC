#include <stdio.h>
#define PI 3.14159

double rect_area(double width, double height) {
    return width * height;
}

double circle_area(double radius) {
    return PI * radius * radius;
}

int main() 
{
    double w = 3.0;
    double h = 5.0;
    double Sr = rect_area(w,h);
    printf("%f %f %f\n",w,h,Sr);
    double r = 52.0;
    double Sc = circle_area(r);
    printf("%f %f\n",r,Sc);
    return 0;

}