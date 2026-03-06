#include<stdio.h>
int main(){
    int a, b, c, d, max=0, sum=0;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d %d %d", &b, &c, &d);
        if(b==c+d){
            sum=2*(b*(c+d));
            if(sum>max){
                max=sum;
            }
        }
        else{
            sum=b*(c+d);
            if(sum>max){
                max=sum;
            }
        }
        
    }
    printf("%d", max);

    return 0;
}