#include<stdio.h>
int main(){
    int a, b, arr[100], cnt=0;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for(int i=0;i<a;i++){
        if(arr[i]==b){
            cnt=cnt+1;
        }
    }
    printf("%d", cnt);
    
    return 0;
}
