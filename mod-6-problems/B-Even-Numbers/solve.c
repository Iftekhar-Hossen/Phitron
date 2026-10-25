// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>

int main()
{
    int number, count = 0;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            ++count;
        }
    }

    if (count < 1)
    {
        printf("-1\n");
    }

    return 0;
}