#include <stdio.h>
#include <stdbool.h>

bool positive(int num) {
    if (num > 0) return true;
    else if ((num == 0) || (num < 0)) return false;
}

int main(void) {
    printf("result: %s", positive(5) == 1 ? "true" : "false");
}
