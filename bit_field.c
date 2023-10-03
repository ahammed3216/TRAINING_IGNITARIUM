#include <stdio.h>

struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int flag3 : 1;
};

union FlagsUnion {
    struct {
        unsigned int flag1 : 1;
        unsigned int flag2 : 1;
        unsigned int flag3 : 1;
    };
    unsigned int allFlags;
};

int main() {
    struct Flags myFlags = {1, 0, 1}; // Using a struct
    printf("Struct Flag1: %u\n", myFlags.flag1);
    printf("Struct Flag2: %u\n", myFlags.flag2);
    printf("Struct Flag3: %u\n", myFlags.flag3);

    union FlagsUnion myUnion;
    myUnion.flag1 = 1;
    myUnion.flag2 = 0;
    myUnion.flag3 = 1;

    printf("Union Flag1: %u\n", myUnion.flag1);
    printf("Union Flag2: %u\n", myUnion.flag2);
    printf("Union Flag3: %u\n", myUnion.flag3);

    printf("Union All Flags: %u\n", myUnion.allFlags);

    return 0;
}

