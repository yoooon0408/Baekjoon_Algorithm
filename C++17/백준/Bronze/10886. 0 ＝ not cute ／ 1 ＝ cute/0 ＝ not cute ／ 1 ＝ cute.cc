#include<stdio.h>
int main(){
    int a, b=0, c=0, array[102]={0};
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d", &array[i]);
        if(array[i]==0){
            b=b+1;
        }
        else if(array[i]==1){
            c=c+1;
        }
    }
    if(b>c){
        printf("Junhee is not cute!");
    }
    else{
        printf("Junhee is cute!");
    }
    
    return 0;
}
