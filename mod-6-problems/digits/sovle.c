// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>

int main()
{
    int limit, current;

    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &current);
        if(current == 0){
            printf("0\n");
            continue;
        }
        while (current != 0)
        {
            int mod = current % 10;
            current = current / 10;
            printf("%d ", mod);
        }
        printf("\n");
    }
}