/*this programs helps to find which percentile error is the highest*/
#include <stdio.h>
void max_error(float a, float b, float c, float d)
{
    if (a > b && a > c && a > d)
    {
        printf("%f has the most error\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%f has the most error\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%f has the most error\n", c);
    }

    else
    {
        printf("%f has the most error\n", d);
    }
}
int main()
{
    float a, b, c, d;
    printf("enter 4 errors\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    max_error(a, b, c, d);

    return 0;
}
