#include <stdio.h>
int main()
{
    int bil;
    int x;
    int total = 0;
    scanf("%d", &bil);

    while (bil != 0)
    {
        x = bil % 10;
        total += x;
        bil = bil / 10;
        if (bil != 0)
        {
            printf("%d + ",x);
        }
        else
        {
            printf("%d = ",x);
        }
    }
    printf("%d",total);
}
