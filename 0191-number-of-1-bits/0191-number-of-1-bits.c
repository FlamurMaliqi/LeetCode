int hammingWeight(uint32_t n) {
    int counter = 0;
    while (n > 0) {
       counter += n & 1;  // Check and count the rightmost bit
       n >>= 1;            // Shift bits right
    }
    return counter;
}