#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * (1 + 0.05));
    
    return 0;
}