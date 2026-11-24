#include <stdio.h>

int main(){
    int s;
    scanf("%d", &s);
    int nums[s];

    for(int i=0; i<s; i++){
        scanf("%d", &nums[i]);
    }

    int reverse_array[s];
    for(int i=0; i<s; i++){
        reverse_array[i] = nums[s-i-1];
    }

    for(int i=0; i<s; i++){
        if(nums[i] != reverse_array[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    
    

    return 0;
}