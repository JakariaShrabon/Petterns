#include <stdio.h>
int main()
{
    int r, c;
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);

    for (r = n; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c", 64 + r);
        }
        printf("\n");
    }
}