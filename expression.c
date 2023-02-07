#include <math.h>
#include <stdio.h>
int main() {
    double x, y, z, disc, t1, t2, rPart, iPart;
    printf("Enter coefficients x, y and z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    disc = y * y - 4 * x * z;

    // condition for real and different roots
    if (disc > 0) {
        t1 = (-y + sqrt(disc)) / (2 * x);
        t2 = (-y - sqrt(disc)) / (2 * x);
        printf("root1 = %.2lf and root2 = %.2lf", t1, t2);
    }

    // condition for real and equal roots
    else if (disc == 0) {
        t1 = t2 = -y / (2 * x);
        printf("t1 = t2 = %.2lf;", t1);
    }

    // if roots are not real
    else {
        rPart = -y / (2 * x);
        iPart = sqrt(-disc) / (2 * x);
        printf("t1 = %.2lf+%.2lfi and t2 = %.2f-%.2fi", rPart, iPart, rPart, iPart);
    }

    return 0;
} 
