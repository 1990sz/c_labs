#include <stdio.h>
#include <math.h>

int main() {
    float h;
    float x = 0;
    printf("Enter h: ");
    scanf("%f", &h);

    printf("x\t\tf(x)\n");
    printf("--------------------\n");

    while (x <= 1.000001)
    {
        if (x <= 1)
            printf("%f    %f\n", x, exp(-2 * sin(x)));
        else
            printf("%f    %f\n", x, (pow(x, 2) - atan(x)));
        x += h;

    }

    /*for (int i = 0; i <= 1 / h; i++)
    {
        if (x <= 1)
            printf("%f    %f\n", x, exp(-2 * sin(x)));
        else
        printf("%f    %f\n", x, (pow(x, 2) - atan(x)));
        x += h;
    }*/

    return 0;
}