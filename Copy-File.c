#include <stdio.h>
int main(int argc, char *argv[]) {
    FILE *F1, *F2;
    F1 = fopen(argv[1], "r");
    F2 = fopen(argv[2], "w");
    char c;
    while ((c = fgetc(F1)) != EOF) {
        fputc(c, F2);
    }
    fclose(F1);
    fclose(F2);
    return 0;
}
