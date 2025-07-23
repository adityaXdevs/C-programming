mystrcpy

#include <stdio.h>
#include <string.h>


char* mystrcpy(char* dest, char* src);

int main() {
    char str[] = "hello";   
    char sam[100];           
    mystrcpy(sam, str);
    printf("main String : %s\n",str);
	printf("Copied String: %s\n", sam);

}


char* mystrcpy(char* dest, char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];  
        i++;
    }
    dest[i] = '\0';  

    return dest;  
}
