#include<stdio.h>
#include<string.h>
int main(){
    int a, b;
    char array[61];
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%s\n", array);
        int len=strlen(array);
        b=array[len-1]-'0';
        if(b%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }

    return 0;
}