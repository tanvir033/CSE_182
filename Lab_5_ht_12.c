#include <stdio.h>

int main() {
    char n;

    printf("Enter the Charectar : ");
    scanf("%ch", &n);

    switch (n) {
        case 'a':
            printf("vowel.");
            break;
        case 'e':
            printf("vowel.");
            break;
        case 'i':
            printf("vowel.");
            break;
        case 'o':
            printf("vowel.");
            break;
        case 'u':
            printf("vowel. \n");
            break;
        case 'A':
            printf("vowel. \n");
            break;
        case 'E':
            printf("%ch is vowel. \n",n);
            break;
        case 'I':
            printf("%ch is vowel. \n",n);
            break;
        case 'O':
            printf("%ch is vowel. \n",n);
            break;
        case 'U':
            printf("%ch is vowel. \n",n);
            break;
        default:
            printf("%ch is vowel. \n",n);
    }

    return 0;
}
