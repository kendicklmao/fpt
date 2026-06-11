#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
    }
    int left = 0;
    int right = n - 1;
    while (left <= right){
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left ++;
        right --;
    }
    for (int i = 0; i < n; i ++){
        printf("%d ", nums[i]);
    }
    return 0;
}