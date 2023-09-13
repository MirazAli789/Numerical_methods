/*this program converts any float number to a 4 decimal place float number*/
#include <stdio.h>
int main()
{
    float var;
    printf("enter a float\n");
    scanf("%f", &var);
    printf("the 4 decimal place is\n");
    printf("%0.4f", var);
    return 0;
}
