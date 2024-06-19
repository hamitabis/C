/**
(gdb) x/10x $rsp
0x7fffffffdf98: 0x61616161      0x61616161      0x61616161      0x61616161
0x7fffffffdfa8: 0x61616161      0x61616161      0x61616161      0x61616161
0x7fffffffdfb8: 0x61616161      0x61616161
**/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char badArray[20];

    strcpy(badArray, argv[1]);
    printf("%x", badArray);

}
