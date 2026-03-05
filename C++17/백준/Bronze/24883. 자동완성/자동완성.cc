#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if(a=='n'||a=='N'){
        printf("Naver D2\n");
    }
    else {
        printf("Naver Whale\n");
    }
    
    return 0;
}