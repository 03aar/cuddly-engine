#include "armstrong_numbers.h"
#include <math.h>
bool is_armstrong_number(int num) {
    int sum = num;
    int len = floor(log10(num) + 1);
    while (num) {
        sum -= pow(num % 10, len);
        num /= 10;
    }
    return sum == 0;
}