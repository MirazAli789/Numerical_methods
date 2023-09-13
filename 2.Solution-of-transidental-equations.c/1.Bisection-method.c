// bisection method for solving transidental equations

#include <stdio.h>
#include <math.h>
double equation(double x)
{
    return pow(x, 3) - x - 1;
}
int main()
{
    double a = 0.0, b = 5.0;
    double accuracy = 0.0001;
    if (equation(a) * equation(b) >= 0)
    {
        printf("The interval is not valid\n");
        return 1;
    }
    double root;
    while ((b - a) >= accuracy)
    {
        root = (a + b) / 2.0;
        if (equation(root) == 0.0)
        {
            break;
        }
        else if (equation(root) * equation(a) < 0)
        {
            b = root;
        }
        else
        {
            a = root;
        }
    }
    printf("Approximate root of x^3-x-1 = 0 is : %lf", root);
    return 0;
}
