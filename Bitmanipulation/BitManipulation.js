class BitManipulation {
  static getBit(n, k) {
    return (n >> k) & 1;
  }

  static setBit(n, k) {
    return n | (1 << k);
  }

  static clearBit(n, k) {
    return n & ~(1 << k);
  }

  static toggleBit(n, k) {
    return n ^ (1 << k);
  }

  static countSetBits(n) {
    let count = 0;
    while (n > 0) {
      count += n & 1;
      n >>= 1;
    }
    return count;
  }
}

module.exports = { BitManipulation };

// Example usage
// const { BitManipulation } = require('./BitManipulation');
// console.log(BitManipulation.getBit(13, 0));
// console.log(BitManipulation.setBit(13, 1));
// console.log(BitManipulation.clearBit(13, 0));
// console.log(BitManipulation.toggleBit(13, 2));
// console.log(BitManipulation.countSetBits(13));
