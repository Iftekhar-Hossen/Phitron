#include <stdio.h>
#include <string.h>
// 4 2
// abcdef
// ebcd af

int main(){
    char a[12];
    char b[12];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // first line output
    printf("%d ", strlen(a)-1);
    printf("%d\n", strlen(b)-1);

    // second line output
    for(int i =0; i<strlen(a)-1; i++){
        printf("%c", a[i]);
    }
    for(int i =0; i<strlen(b)-1; i++){
        printf("%c", b[i]);
    }
    printf("\n");

    // third line output
    printf("%c", b[0]);
    for(int i=1; i<strlen(a)-1; i++){
        printf("%c", a[i]);
    }
    printf(" ");
    printf("%c", a[0]);
    for(int i=1; i<strlen(b)-1; i++){
        printf("%c", b[i]);
    }

    return 0;
}