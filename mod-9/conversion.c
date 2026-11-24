#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[1000002];
    fgets(buffer, sizeof(buffer), stdin);
    for (int i = 0; buffer[i] != '\n' && buffer[i] != '\0'; i++)
    {
        if (buffer[i] >= 65 && buffer[i] <= 90)
        {
            printf("%c", buffer[i] + 32);
        }
        else if (buffer[i] >= 97 && buffer[i] <= 122)
        {
            printf("%c", buffer[i] - 32);
        }
        else if (buffer[i] == ',')
        {
            printf(" ");
        }
    }

    return 0;
}