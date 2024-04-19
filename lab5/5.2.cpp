#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Chuỗi ban đầu: %s\n", str);
    
    reverseString(str);
    
    printf("Chuỗi sau khi nghịch đảo: %s\n", str);

    return 0;
}