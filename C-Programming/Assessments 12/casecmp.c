#include <ctype.h>

int mystrncasecmp(const char *str1, const char *str2, int n) {
    for (int i = 0; i < n; i++) {
        char c1 = tolower((unsigned char)str1[i]);
        char c2 = tolower((unsigned char)str2[i]);

        if (c1 != c2)
            return c1 - c2;

        if (str1[i] == '\0' || str2[i] == '\0')
            break;
    }
    return 0;
}