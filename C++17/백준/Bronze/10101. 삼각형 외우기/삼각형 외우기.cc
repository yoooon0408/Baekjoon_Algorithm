#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a==60&&b==60&&c==60){
        printf("Equilateral");
    }
    else if(a+b+c!=180){
        printf("Error");
    }
    else if(a+b+c==180&&a!=b&&b!=c&&c!=a){
        printf("Scalene");
    }
    else if(a+b+c==180&&a==b&&b!=c&&a!=c){
        printf("Isosceles");
    }
    else if(a+b+c==180&&b==c&&c!=a&&b!=a){
        printf("Isosceles");
    }
    else if(a+b+c==180&&a==c&&a!=b&&c!=b){
        printf("Isosceles");
    }
    
    return 0;
}