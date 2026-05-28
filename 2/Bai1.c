#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n < 0){
        n = -n;
    }
    int ans = 0;
    while (n != 0){
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    printf("%d", ans);
    return 0;
}