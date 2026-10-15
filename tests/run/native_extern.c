#include <stdint.h>
#include <stdbool.h>
#include <string.h>

int64_t ext_add(int64_t a, int64_t b) { return a + b; }
double ext_scale(double x, float k) { return x * k; }
bool ext_is_even(int32_t n) { return n % 2 == 0; }
int64_t ext_len(const char *s) { return (int64_t)strlen(s); }
double ext_sum(const double *xs, int64_t n) {
    double t = 0;
    for (int64_t i = 0; i < n; i++) t += xs[i];
    return t;
}
int64_t ext_checksum(const uint8_t *bytes, int64_t n) {
    int64_t t = 0;
    for (int64_t i = 0; i < n; i++) t = t * 31 + bytes[i];
    return t;
}
const char *ext_name(void) { return "from C"; }
static int64_t counter = 0;
void ext_bump(int64_t by) { counter += by; }
int64_t ext_counter(void) { return counter; }
