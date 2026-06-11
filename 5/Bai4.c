#include<stdio.h>
#include<math.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int nums[n];
    long long int max = -3000000000;
    long long int min = 3000000000;
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
        if (nums[i] < min){
            min = nums[i];
        }
        if (nums[i] > max){
            max = nums[i];
        }
    }
    if (abs(max - x) < abs(min - x)){
        printf("%d", max);
    }
    else{
        printf("%d", min);
    }
    return 0;
}