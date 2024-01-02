#include <stdio.h>

double f(double x) {
    return 2 * x + 3;
}

double integrate(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 2 * (f(a) + f(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }

    return h * sum;
}

int main() {
    double a = 2; 
    double b = 3; 
    int n = 80 ;   

    double result = integrate(a, b, n);
    
    printf("Hasil integral: %lf\n", result);
    
    return 0;
}
