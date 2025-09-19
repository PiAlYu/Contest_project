typedef int STYPE;
typedef unsigned int UTYPE;

STYPE
bit_reverse(STYPE value) {
    UTYPE u_value = (UTYPE) value;
    UTYPE result = 0;
    UTYPE temp = ~(UTYPE) 0;
    while (temp) {
        result = (result << 1) | (u_value & 1);
        u_value >>= 1;
        temp >>= 1;
    }
    return (STYPE) result;
}
