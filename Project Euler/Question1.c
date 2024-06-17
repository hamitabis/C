#include <stdio.h>
#include <stdbool.h>

bool checkNumber(int num);

bool checkNumber(int num) {
    if ((num % 3 == 0) || ((num % 5) == 0)) 
        return true;
    return false;  
}

int main(void) {
    int total = 0;
    
    for (int i = 0; i < 1000; i++) {
        if (checkNumber(i)) total += i;
    }

    printf("result: %d\n", total);
}

