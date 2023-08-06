// Newton forward interpolation formula
/*************************************/
#include <stdio.h>
int main()
{
    int n; // Number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x[n]; // Array to store x values
    double y[n]; // Array to store y values

    printf("Enter the data points:\n");
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%lf", &x[i]);
        printf("y[%d] = ", i);
        scanf("%lf", &y[i]);
    }

    double x_interpolate; // Value at which interpolation is required
    printf("Enter the value to interpolate: ");
    scanf("%lf", &x_interpolate);

    double h = x[1] - x[0]; // Calculate the step size

    // Create the forward difference table
    double fd_table[n][n];
    for (int i = 0; i < n; i++)
    {
        fd_table[i][0] = y[i];
    }

    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            fd_table[i][j] = fd_table[i + 1][j - 1] - fd_table[i][j - 1];
        }
    }

    // Perform interpolation
    double result = y[0];
    double u = (x_interpolate - x[0]) / h;

    for (int j = 1; j < n; j++)
    {
        double term = fd_table[0][j];
        for (int i = 0; i < j; i++)
        {
            term = term * (u - i) / (i + 1);
        }
        result += term;
    }

    printf("Interpolated value at %.2lf is %.4lf\n", x_interpolate, result);

    return 0;
}
