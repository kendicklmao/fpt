#include<stdio.h>
#include<stdbool.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int nums[n];
    bool check = false;
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
        if (x == nums[i]){
            printf("1");
            check = true;
            break;
        }
    }
    if (check == false){
        printf("0");
    }
    return 0;
}