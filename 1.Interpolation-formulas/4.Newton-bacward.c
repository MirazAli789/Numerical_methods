// Newton backward interpolation formula

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x[n], y[n][n];

    printf("Enter the data points (x, y):\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &x[i], &y[i][0]);
    }

    double value;
    printf("Enter the value of x for interpolation: ");
    scanf("%lf", &value);

    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
        }
    }

    double result = y[n - 1][0];
    double term = 1.0;

    for (int i = 1; i < n; i++) {
        term *= (value - x[n - 1 - i]) / (i * 1.0);
        result += (term * y[n - 1][i]);
    }

    printf("Interpolated value at x = %.2lf is %.6lf\n", value, result);

    return 0;
}
