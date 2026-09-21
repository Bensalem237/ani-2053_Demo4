#include "math.h"

float add(float a, float b) { return a + b; }
float substract(float a, float b) { return a - b; }

float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { 
    if (b < 0) return 0;
    return a / b; 
}
