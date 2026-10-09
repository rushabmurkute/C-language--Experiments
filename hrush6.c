#include <stdio.h>

int main()
{
    int a, b, c;

    // Demonstrating operator precedence
    a = 10 + 5 * 2;
    printf("Precedence: 10 + 5 * 2 = %d\n", a);

    // Demonstrating associativity (left to right)
    b = 20 / 5 * 2;
    printf("Associativity: 20 / 5 * 2 = %d\n", b);

    // Demonstrating parentheses
    c = (10 + 5) * 2;
    printf("Using parentheses: (10 + 5) * 2 = %d\n", c);

    return 0;
}
