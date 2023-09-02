#include <stdio.h>
int main()
{
    int r, c;
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);

    for (r = n; r >= 1; r--)
    {
        for (c = 1; c <= n - r; c++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d", c / 2);
        }
        printf("\n");
    }
}