/*this program calculates Absolute Error, Relative error and percentile error*/
#include <stdio.h>
float absolute(float x, float y)
{
    if (x > y)
    {
        float c = (x - y);
        return c;
    }
    else
    {
        float b = (y - x);
        return b;
    }
}
float relative(float x, float y)
{
    float c = absolute(x, y);
    float z = (c / x);
    return z;
}

float percent(float x, float y)
{
    float u = relative(x, y);
    float g = (u * 100);
    return g;
}

int main()
{
    float x_true, x;
    printf("enter x_true\n");
    scanf("%f", &x_true);
    printf("enter x\n");
    scanf("%f", &x);
    float E_a = absolute(x_true, x);
    float E_r = relative(x_true, x);
    float E_p = percent(x_true, x);
    printf("\n");
    printf("Absolute Error = %0.4f\n", E_a);
    printf("Relative Error = %0.4f\n", E_r);
    printf("Percentile Error = %0.4f%%\n", E_p);

    return 0;
}
