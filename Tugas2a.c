#include <stdio.h>
#include <string.h>

int main()
{

    int car;
    do
    {
        int cir, cur, cer, cor, i;
        char string[100];

        printf("=== Palindrome Checker ===\n\n");
        printf("Masukkan Kata = ");
        fgets(string, 100, stdin);

        car = strlen(string);
        cir = car - 2;
        cur = cir - 1;
        cer = cur - 1;
        cor = cer - 1;

        if (string[0] == string[cir] && string[1] == string[cur] && string[2] == string[cer] && string[3] == string[cor])
        {
            printf("is a palindrome\n\n");
        }
        else
        {
            printf("is not a palindrome\n\n");
        }
    } while (car <= 0 || car >= 0);
}