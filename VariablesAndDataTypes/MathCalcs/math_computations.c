#include <stdio.h>
#include <math.h>

/*

- I use the math lib, but the solution from franneck94 is not dependent on it.

- I tried to make a folder compilation with this file, but it didn't work. I will try later. I think the problem lies
in line 2.

- I found the problem: at first I tried: double x, y, z1, z2, z3; but it didn't work. The solution you can see below.
*/

int main() {
    double x;
    double y;
    double z1;
    double z2;
    double z3;

    x = -2.0f;
    y = 3.0f;

    //
    z1 = pow(x, 2) + pow(y, 2) - x * y + 2.0f;

    //
    z2 = pow(x-y, 3) -3.0f;

    //
    z3 = 2.0f * pow(x, 3) - 0.5f * pow(x, 2) -x + 4.0f;
    z3 = z3 / y;

    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);
    printf("z3 = %f\n", z3);


    return 0;
}
