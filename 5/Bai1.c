#include<stdio.h>
#include<stdbool.h>

bool prime[10000001];
void sieve(){
    for (int i = 2; i < 10000001; i ++){
        prime[i] = true;
    }
    for (int i = 2; i * i < 10000001; i ++){
        if (prime[i]){
            for (int j = i * i; j < 10000001; j += i){
                prime[j] = false;
            }
        }
    }
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    sieve();
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i ++){
        if (prime[nums[i]]){
            printf("%d ", nums[i]);
        }
    }
    return 0;
}