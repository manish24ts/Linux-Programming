#include <stdio.h>
#include <stdlib.h>
void mv(const char *F1, const char *F2) {
    rename(F1, F2);
}
int main(int argc, char *argv[]) {

    mv(argv[1], argv[2]);
    return 0;
}
