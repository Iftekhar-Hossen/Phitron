// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <stdio.h>

int main(){

    int limit, current, current_highest = 0;

    scanf("%d", &limit);

    for(int i = 0; i< limit; i++){
        scanf("%d", &current) ;
        if( current> current_highest){
            current_highest = current;
        }
    }

    printf("%d", current_highest);


}