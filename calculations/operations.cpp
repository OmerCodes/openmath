double oIntPow (long double base, int exponent) {
    long double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double oFactorial (int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double oIntNthRoot (int index, long double radicand, int iterations = 12, long double guess = 0.0) {
    long double result;
    if (guess == 0.0) {
        guess = oIntPow(index, static_cast<int> (index));
    }

    for (int i = 0; i < iterations; i++) {
        if (i == 0) result = guess;
        else {
            result = (((index-1.0)/index)*result)+((radicand/index)*(1/oIntPow(result,index-1)));
        }
    }


    return result;
}

