#include <stdio.h>
#include <stdlib.h>
void cat(const char *filename) {
    FILE *file = fopen(filename, "r");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}
int main(int argc, char *argv[]) {
    cat(argv[1]);
    return 0;
}
