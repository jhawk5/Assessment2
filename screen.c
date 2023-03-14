#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid;
    pid = fork();
    if (pid < 0) {
        printf(1, "init: fork failed\n");
        exit();
    }
    if (pid == 0) {
        clrscr();
        exec("sh", argv);
        printf(1, "init: exec sh failed\n");
    }
    exit();
}