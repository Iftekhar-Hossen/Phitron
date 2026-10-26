// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <stdio.h>


int main(){
    int number, current = 0, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &current);
        if (current % 2 == 0 )
        {
            even = even + 1;
            
        }else{
            odd = odd + 1;
        }

        if (current < 0)
        {
            negative = negative+ 1;
        }else if(current > 0){
            positive = positive + 1;
        }
        
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
}