#include<stdio.h>
int main(){
    int a, b, array[101]={0}, c=0, max=-999;
    scanf("%d %d", &a, &b);
    for(int i=0;i<a;i++){
        scanf("%d ", &array[i]);
        
    }
    for(int i=0;i<a-2;i++){
        for(int j=i+1;j<a-1;j++){
            for(int k=j+1;k<a;k++){
                c=array[i]+array[j]+array[k];
                if(c>max&&c<=b){
                    max=c;
                }
            }
        }
    }
    
    printf("%d", max);

    return 0;
}