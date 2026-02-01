#include <stdio.h>

int main() {
    double a, b, sum=0;

    scanf("%lf %lf", &a,&b);
    sum=a/b;
    printf("%.9lf", sum);
    return 0;

}