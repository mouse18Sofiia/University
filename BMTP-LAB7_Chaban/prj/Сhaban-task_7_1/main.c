#include <stdio.h>
#include <string.h>

int count_zh(const char *sentence) {
    int count = 0;
    while (*sentence) {
        if (*sentence == -122)
            count++;
        sentence++;
    }
    return count;
}

int main() {
    char sentence[1000];
    int count;

    printf("%c%c%c%c%c%c%c %c%c%c%c%c%c%c: ", -126, -94, -91, -92, 105, -30, -20, -32, -91, -25, -91, -83, -83, -17);
    gets(sentence);

    // Визначення останнього символу речення
    int len = strlen(sentence);
    int found = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (sentence[i] == '!' || sentence[i] == '?' || (sentence[i] == '.' && sentence[i - 1] == '.' && sentence[i - 2] == '.')) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%c%c%c%c%c%c%c: %c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c '!','...', %c%c%c '?'!\n", -113, -82, -84, -88, -85, -86, -96, -112, -91, -25, -91, -83, -83, -17, -84, -96, -13, -89, -96, -86, 105, -83, -25, -29, -94, -96, -30, -88, -31, -17, -83, -96, -96, -95, -82);
        return 1; // Вихід з програми з кодом помилки83
    }

    // Перевірка, чи речення містить "Ж"
    count = count_zh( sentence);

    if (count > 0) {
        printf("%c%c%c%c%c%c%c%c%c '%c' %c %c%c%c%c%c%c%c: %d\n", -118, 105, -85, -20, -118, 105, -31, -30, -20, -122, -29, -32, -91, -25, -91, -83, -83, 105 ,count);
    } else {
        printf("%c%c%c%c%c%c%c %c%c%c '%c'\n", -112, -91, -25, -91, -83, -83, -17, -95, -91, -89, -122);
    }

    return 0;
}
