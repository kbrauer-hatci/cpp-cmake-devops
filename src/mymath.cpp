// Copyright 2024 Hyundai America Technical Center, Inc.

#include "../include/mymath.h"

int sqrt(int x) {
    if (x == 0) return 0;
    int left = 1;
    int right = x/2 + 1;
    int res;

    while (left <= right) {
        int mid = left + ((right-left)/2);
        if (mid <= x / mid) {
            left = mid + 1;
            res = mid;
        } else {
            right = mid - 1;
        }
    }

    return res;
}


double fact(double n) {
    if (n == 0) {
        return 1;
    }
    return n * (fact(n - 1));
}

double pow(double n, double power) {
    double result = n;
    for (int i = 1; i < power; i++) {
        result = n * result;
    }
    return result;
}

double fmod(double a, double b) {
    double frac = a / b;
    int floor = frac > 0 ?
        static_cast<int>(frac) :
        static_cast<int>(frac - 0.9999999999999999);
    return (a - b * floor);
}

double sin(double n) {
    const double my_pi = 3.14159265358979323846;
    n = fmod(n, 2 * my_pi);
    if (n < 0) {
        n = 2 * my_pi - n;
    }
    char sign = 1;
    if (n > my_pi) {
        n -= my_pi;
        sign = -1;
    }

    double result = n;
    double coefficent = 3;
    for (int i = 0; i < 10; i++) {
        double p = pow(n, coefficent);
        double frac = fact(coefficent);
        if (i % 2 == 0) {
            result = result - (p/frac);
        } else {
            result = result + (p/frac);
        }
        coefficent = coefficent + 2;
    }
    return sign * result;
}
