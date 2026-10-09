#include <iostream>
using namespace std;

class BitManipulation {
public:
    static long getBit(long n, int k) {
        return (n >> k) & 1L;
    }

    static long setBit(long n, int k) {
        return n | (1L << k);
    }

    static long clearBit(long n, int k) {
        return n & ~(1L << k);
    }

    static long toggleBit(long n, int k) {
        return n ^ (1L << k);
    }

    static int countSetBits(long n) {
        int count = 0;
        while (n > 0) {
            count += n & 1L;
            n >>= 1;
        }
        return count;
    }
};

int main() {
    long n = 13; // 1101

    cout << "getBit(13, 0) = " << BitManipulation::getBit(n, 0) << endl;
    cout << "setBit(13, 1) = " << BitManipulation::setBit(n, 1) << endl;
    cout << "clearBit(13, 0) = " << BitManipulation::clearBit(n, 0) << endl;
    cout << "toggleBit(13, 2) = " << BitManipulation::toggleBit(n, 2) << endl;
    cout << "countSetBits(13) = " << BitManipulation::countSetBits(n) << endl;

    return 0;
}
