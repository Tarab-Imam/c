#include <stdio.h>
void main()
{
    char d;
    printf("enter a character");
    scanf("%c",&d);
    switch(d)
    {
        case'a':printf("Vowel");break;
        case'e':printf("Vowel");
        case'i':printf("Vowel");break;
        case'o':printf("Vowel");break;
        case'u':printf("Vowel");break;
        default:printf("consonant");break;
    }
}
