#include <stdio.h>

int main(){

    int s;
    scanf("%d", &s);
    int nums[s];
    for(int i=0; i<s; i++){
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < s/2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[s-i-1];
        nums[s-i-1] = temp;
    }
    for(int i=0; i<s; i++){
        printf("%d ",nums[i]);
    }
    

    return 0;
}