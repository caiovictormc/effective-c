// chapter 1 - introduction

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char message[13] = "hello, world!";
    size_t size = sizeof(message) / sizeof(message[0]);

    int printed_chars = printf("%s", message);
    if (printed_chars != size) {
        return EXIT_FAILURE;
    };
    return EXIT_SUCCESS;
}
