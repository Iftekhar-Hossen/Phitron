#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; 
    scanf("%d", &n);
    int num_array[n];
    
    for(int i=0; i<n; i++){
          scanf("%d", &num_array[i]);
    }
    for(int i = n- 1; i >= 0; i--){
        if(i % 2 !=0){
            printf("%d ", num_array[i]);
        }
    }
    
    return 0;
}
