#include <stdio.h>

long getBit(long n, int k) {
    return (n >> k) & 1L;
}

long setBit(long n, int k) {
    return n | (1L << k);
}

long clearBit(long n, int k) {
    return n & ~(1L << k);
}

long toggleBit(long n, int k) {
    return n ^ (1L << k);
}

int countSetBits(long n) {
    int count = 0;
    while (n > 0) {
        count += n & 1L;
        n >>= 1;
    }
    return count;
}

int main() {
    long n = 13; // 1101

    printf("getBit(13, 0) = %ld\n", getBit(n, 0));
    printf("setBit(13, 1) = %ld\n", setBit(n, 1));
    printf("clearBit(13, 0) = %ld\n", clearBit(n, 0));
    printf("toggleBit(13, 2) = %ld\n", toggleBit(n, 2));
    printf("countSetBits(13) = %d\n", countSetBits(n));

    return 0;
}
