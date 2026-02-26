#include<stdio.h>
int main(){
    int a, b, c, d, e=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    e=a+b;
    if(d>=e&&d>=c){
        printf("~.~");
    }
    else if(d>=e&&d<c){
        printf("Shuttle");
    }
    else if(d<e&&d>=c){
        printf("Walk");
    }
    else{
        printf("T.T");
    }
    
    return 0;
}
