/*this code coverts a floating point to a 3 significant figure floating point*/
#include <stdio.h>

int main() {
    float num;
    
    printf("Enter a float number: ");
    scanf("%f", &num);

    printf("Float with three significant figures: %.3g\n", num);

    return 0;
}
