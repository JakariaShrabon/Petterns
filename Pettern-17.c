#include <stdio.h>
int main()
{
    int r, c;
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d", r);
        }
        printf("\n");
    }
}