#include<stdio.h>
#include<math.h>

int main(){
    float amount, term;
    scanf("%f %f", &amount, &term);
    printf("%.2f", amount * pow((1 + 0.08), term));
}