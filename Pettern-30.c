#include <stdio.h>
int main()
{
    int r, c;
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= r; c++)
        {
            printf("%d", r);
        }
        printf("\n");
    }
    for (r = n - 1; r >= 1; r--)
    {

        for (c = 1; c <= r; c++)
        {
            printf("%d", r);
        }
        printf("\n");
    }
}