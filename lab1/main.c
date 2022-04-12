#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c, x = 1.0f;
    printf("Enter a,b,c -> ");
    scanf("%f %f %f", &a, &b, &c);
    printf("f(x) = %f * x^2 ", a);
    if (b > 0.0f) printf("+ ");
    printf("%f * x ", b);
    (c > 0.0f) ? printf("+ ") : printf("- ");
    printf("%f\n", fabs(c));
    float f_x =       a * x * x + b * x + c;
    float f_minus_x = a * -x * -x + b * -x + c;
    (f_x == f_minus_x) ? printf("Function is even: f(x) = %f = f(-x) = %f\n", f_x, f_minus_x) : (f_minus_x == -f_x) ? printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_minus_x, -f_x) : printf ("Function is neither even nor odd: f(x) = %f != f(-x) = % f != -f(x) = %f\n" , f_x , f_minus_x , -f_x);
    float vx = -b / (2.0f * a);
    float vy = a * vx * vx + b * vx + c;
    printf("Vertex (%f, %f) is a ", vx, vy);
    (a > 0.0f) ? printf("minimum") : printf("maximum");
    return 0;
}