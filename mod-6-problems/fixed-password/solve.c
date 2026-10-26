// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D


#include <stdio.h>


int main(){
    int number, next = 1;

    for(int i = 0; i < next; i++){
        scanf("%d", &number);
        if( number== 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
            next = next + 1;
        }

    }

    return 0;
}