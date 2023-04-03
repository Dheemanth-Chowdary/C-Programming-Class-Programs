#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Vowels in the word: ");
    for (i = 0; word[i] != '\0'; i++) {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            printf("%c ", word[i]);
            vowels++;
        }
    }

    printf("\nConsonants in the word: ");
    for (i = 0; word[i] != '\0'; i++) {
        if (!isalpha(word[i]) || tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u') {
            continue;
        }
        printf("%c ", word[i]);
        consonants++;
    }

    printf("\n\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d", consonants);

    return 0;
}

