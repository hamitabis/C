#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int total = 0;
    
    for (int i = 0; i < 1000; i++) {
        if (!(i % 3 && i % 5))
            total += i;
    }

    printf("result: %d\n", total);
}
