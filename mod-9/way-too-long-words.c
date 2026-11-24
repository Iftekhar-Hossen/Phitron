#include <stdio.h>
#include <string.h>
int main(){
    int s;
    scanf("%d", &s);
    char buffer[100000];
    for(int i=0; i<=s; i++){
        fgets(buffer, sizeof(buffer), stdin);
        if(strlen(buffer) > 10){
         printf("%c", buffer[0]);
         printf("%d", strlen(buffer)-3);
         printf("%c", buffer[strlen(buffer)-2]); 
        }
    }
    
    return 0;
}


