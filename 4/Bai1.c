#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 1){
            sum += nums[i];
            cnt ++;
        }
    }
    printf("%.2f", (float) sum / cnt);
    return 0;
}