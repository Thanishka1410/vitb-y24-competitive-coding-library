class BitManipulation:
    @staticmethod
    def getBit(n, k):
        return (n >> k) & 1

    @staticmethod
    def setBit(n, k):
        return n | (1 << k)

    @staticmethod
    def clearBit(n, k):
        return n & ~(1 << k)

    @staticmethod
    def toggleBit(n, k):
        return n ^ (1 << k)

    @staticmethod
    def countSetBits(n):
        count = 0
        while n > 0:
            count += n & 1
            n >>= 1
        return count


if __name__ == "__main__":
    n = 13  # 1101
    print(f"getBit(13, 0) = {BitManipulation.getBit(n, 0)}")
    print(f"setBit(13, 1) = {BitManipulation.setBit(n, 1)}")
    print(f"clearBit(13, 0) = {BitManipulation.clearBit(n, 0)}")
    print(f"toggleBit(13, 2) = {BitManipulation.toggleBit(n, 2)}")
    print(f"countSetBits(13) = {BitManipulation.countSetBits(n)}")
