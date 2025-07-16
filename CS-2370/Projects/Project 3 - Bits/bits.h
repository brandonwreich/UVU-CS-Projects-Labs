#include <ostream>
#include <bitset>
#include <assert.h>

class Bits {
    using IType = unsigned long long; // We only have to change the integer type here, if desired
    enum {NBITS = sizeof(IType)*8};
    IType bits = 0;
public:
    Bits() = default;
    Bits(IType n) {
        bits = n;
    }
    static int size() {
        return NBITS;
    }
    bool at(int pos) const {
        assert(0 <= pos && pos < NBITS);
        return bits & (IType(1) << pos);
    }
    void set(int pos) {
        assert(0 <= pos && pos < NBITS);
        bits |= (IType(1) << pos);
    }
    void set() {
        bits = ~0;
    }
    void reset(int pos) {
        assert(0 <= pos && pos < NBITS);
        bits &= ~(IType(1) << pos);
    }
    void reset() {
        bits = 0;
    }
    void assign(int pos, bool val) {
        assert(0 <= pos && pos < NBITS);
        val ? set(pos) : reset(pos);
    }
    void assign(IType n) {
        bits = n;
    }
    void toggle(int pos) {
        assert(0 <= pos && pos < NBITS);
        bits ^= (IType(1) << pos);
    }
    void toggle() {
        bits = ~bits;
    }
    void shift(int n) {
        if (n > 0) {
            bits >>= n;
        }
        else if (n < 0) {
            bits <<= -n;
        }
    }
    void rotate(int n) {       // If n > 0, rotates right n places; if n < 0, rotates left
        if(n > 0) {
            
        }
        else if(n < 0) {

        }
    }
    int ones() const {
        int count = 0;

        for (int i = 0; i < NBITS; i++) {
            if (at(i)) {
                count++;
            }
        }
        return count;
    }
    int zeroes() const {
        return NBITS - ones();
    }
    IType to_int() const {
        return bits;
    }
    friend bool operator==(const Bits& b1, const Bits& b2) {
        return b1.bits == b2.bits;
    }
    friend bool operator!=(const Bits& b1, const Bits& b2) {
        return b1.bits != b2.bits;
    }
    friend std::ostream& operator<<(std::ostream& os, const Bits& b) {
        return os << std::bitset<NBITS>(b.bits);    // Be sure to #include <bitset>
    }
};