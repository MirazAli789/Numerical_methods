// Newton Raphson's method

#include <stdio.h>
#include <math.h>
double equation(double x)
{
    return pow(x, 3) - x - 1;
}
double derivative(double x)
{
    return 3 * pow(x, 2) - 1;
}
int main()
{
    double a = 0.0, b = 5.0;
    double accuracy = 0.0001;
    if (equation(a) * equation(b) >= 0)
    {
        printf("Invalid interval\n");
        return 1;
    }
    double root1, root2;
    root1 = (a + b) / 2.0;
    while ((b - a) >= accuracy)
    {
        if (equation(root1) == 0.0)
        {
            break;
        }
        else
        {
            root2 = (root1) - ((equation(root1)) / (derivative(root1)));
        }
    }
    printf("The approximate root of the equation x^3 - x - 1 = 0 is: %lf", root2);
    return 0;
}
