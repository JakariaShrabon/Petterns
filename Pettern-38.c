#include <stdio.h>
int main()
{
    int r, c, n;
    printf("Enter your number :");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)
            printf(" ");

        for (c = 1; c <= r; c++)
            printf("%c", r + 64);
        printf("\n");
    }
    for (r = n - 1; r >= 1; r--)
    {
        for (c = 1; c <= n - r; c++)
            printf(" ");

        for (c = 1; c <= r; c++)
            printf("%c", r + 64);
        printf("\n");
    }
}