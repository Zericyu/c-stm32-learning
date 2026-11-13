#include <stdio.h>

int main()
{
    char a;

    scanf(" %c",&a);

    switch(a)
    {
        case 'A':
            printf("Hangzhou\n");
            break;
        case 'B':
            printf("Ningbo\n");
            break;
        case 'C':
            printf("Wenzhou\n");
            break;
        case 'D':
            printf("Shaoxing\n");
            break;
        case 'E':
            printf("Huzhou\n");
            break;
        case 'F':
            printf("Jiaxing\n");
            break;
        case 'G':
            printf("Jinhua\n");
            break;
        case 'H':
            printf("Quzhou\n");
            break;
        case 'J':
            printf("Taizhou\n");
            break;
        case 'K':
            printf("Lishui\n");
            break;
        case 'L':
            printf("Zhoushan\n");
            break;
        default:
            printf("Input error\n");
    }

    return 0;
}