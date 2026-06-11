#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    long long int max = -3000000000;
    long long int min = 3000000000;
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
        if (nums[i] > max){
            max = nums[i];
        }
        if (nums[i] < min){
            min = nums[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}