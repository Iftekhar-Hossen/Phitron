#include <stdio.h>
#include <string.h>

int main(){
    char buffer[1005];
    fgets(buffer, sizeof(buffer), stdin);
    for(int i=0; i< strlen(buffer)/2; i++){
        if (buffer[i] != buffer[strlen(buffer)-2-i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
