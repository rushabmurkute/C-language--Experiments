#include <stdio.h>

int main()
{
    int iarr[3], i;
    float farr[3];
    char carr[3];

    // Accept integer array elements
    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &iarr[i]);
    }

    // Accept float array elements
    printf("Enter 3 float elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &farr[i]);
    }

    // Accept character array elements
    printf("Enter 3 character elements:\n");
    for (i = 0; i < 3; i++)
    {
        scanf(" %c", &carr[i]);
    }

    // Display integer values and addresses
    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %d, Address = %p\n",
               iarr[i], (void *)&iarr[i]);
    }

    // Display float values and addresses
    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %.2f, Address = %p\n",
               farr[i], (void *)&farr[i]);
    }

    // Display character values and addresses
    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Value = %c, Address = %p\n",
               carr[i], (void *)&carr[i]);
    }

    return 0;
}
