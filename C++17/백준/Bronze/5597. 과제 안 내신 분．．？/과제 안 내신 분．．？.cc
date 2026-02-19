#include<stdio.h>
int main(){
    int a, array[31]={0};
    for(int i=1;i<=30;i++){
        scanf("%d", &a);
        array[a]=1;
    }
    for(int i=1;i<=30;i++){
        if(array[i]!=1){
            printf("%d\n",i);
            }
        }
           
    return 0;
}
