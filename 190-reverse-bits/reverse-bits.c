int reverseBits(int n) {
    int result = 0;
    for (int i = 0 ; i<32; i++){
        int lsb = n&1;
        result |= lsb <<(31-i);
        n>>=1;
    }
    return result;

}