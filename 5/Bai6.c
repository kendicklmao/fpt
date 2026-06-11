#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
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
    if (abs(max) > abs(min)){
        printf("%d", abs(max));
    }
    else{
        printf("%d", abs(min));
    }
    return 0;
}