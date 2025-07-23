#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "hello world";
    char str2[100] = "HELLO";
    char temp[100];
    char ch = 'o';

    // 1. strcpy
    strcpy(temp, str1);
    printf("1. strcpy: %s\n", temp);

    // 2. strncpy
    strncpy(temp, str2, 3);
    temp[3] = '\0';
    printf("2. strncpy: %s\n", temp);

    // 3. strcat
    strcat(str1, str2);
    printf("3. strcat: %s\n", str1);

    // 4. strncat
    strncat(temp, "TEST", 2);
    printf("4. strncat: %s\n", temp);

    // 5. strlen
    printf("5. strlen: %lu\n", strlen(str1));

    // 6. strcmp
    printf("6. strcmp: %d\n", strcmp(str1, str2));

    // 7. strncmp
    printf("7. strncmp: %d\n", strncmp(str1, str2, 5));

    // 8. strchr
    char *pos1 = strchr(str1, ch);
    if (pos1) printf("8. strchr: '%c' found at index %ld\n", ch, pos1 - str1);

    // 9. strrchr
    char *pos2 = strrchr(str1, ch);
    if (pos2) printf("9. strrchr: Last '%c' at index %ld\n", ch, pos2 - str1);

    // 10. strstr
    char *found = strstr(str1, "LO");
    if (found) printf("10. strstr: Found 'LO' at %ld\n", found - str1);

    // 11. strpbrk
    char *vowel = strpbrk(str1, "aeiou");
    if (vowel) printf("11. strpbrk: First vowel is '%c'\n", *vowel);

    // 12. strspn
    size_t span = strspn(str2, "HEL");
    printf("12. strspn: Length of segment matching 'HEL' is %lu\n", span);

    // 13. strcspn
    size_t nonmatch = strcspn(str1, "XYZ");
    printf("13. strcspn: First non-matching index for 'XYZ' is %lu\n", nonmatch);

    // 14. strtok
    char sentence[] = "split,this,into,tokens";
    char *token = strtok(sentence, ",");
    printf("14. strtok: Tokens ? ");
    while (token) {
        printf("[%s] ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    // 15. memcmp
    printf("15. memcmp: %d\n", memcmp(str1, str2, 5));

    // 16. memcpy
    memcpy(temp, str2, strlen(str2) + 1);
    printf("16. memcpy: %s\n", temp);

    // 17. memmove
    memmove(str1 + 3, str1, strlen(str1) + 1);
    printf("17. memmove (shifted): %s\n", str1);

    // 18. memset
    memset(temp, '-', 5);
    temp[5] = '\0';
    printf("18. memset: %s\n", temp);

    // 19. tolower
    printf("19. tolower: ");
    for (int i = 0; str2[i]; i++)
        putchar(tolower(str2[i]));
    printf("\n");

    // 20. toupper
    printf("20. toupper: ");
    for (int i = 0; str2[i]; i++)
        putchar(toupper(str2[i]));
    printf("\n");

    // 21. strcmpi (non-standard alternative)
    #ifdef _MSC_VER
        printf("21. strcmpi (MS-specific): %d\n", strcmpi("Hello", "hello"));
    #else
        // For GCC: use strcasecmp
        printf("21. strcasecmp (GCC): %d\n", strcasecmp("Hello", "hello"));
    #endif

    return 0;
}