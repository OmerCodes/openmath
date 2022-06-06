#include "./openmath.hpp"

double oSine (float angle, int digits, bool radians) {
    if (radians) {
        angle = angle * 180 / PI;
    }
    double result = 0;
    double x = angle;
    for (int i = 1; i <= digits; i++) {
        result += oPow(-1, i) * oPow(x, 2 * i - 1) / oFactorial(2 * i - 1);
    }
    return result;   
}

double oCosine (float angle, int digits, bool radians) {
    if (radians) {
        angle = angle * 180 / PI;
    }
    double result = 0;
    double x = angle;
    for (int i = 1; i <= digits; i++) {
        result += oPow(-1, i) * oPow(x, 2 * i) / oFactorial(2 * i);
    }
    return result;   
} 

