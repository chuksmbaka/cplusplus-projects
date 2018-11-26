#include <iostream>
#include <cmath> // we use the 'abs()' function
using namespace std;

int main()
{
    const long double from = 0.0; // lower bound of the integral
    const long double to = 1.0; // upper bound of the integral
    long double integral_val = 0.0; // holds the temporary values and final result
    long double x = from; // the point at which we want to evaluate the function
    const size_t N = 1000000; // the number of points we want to evaluate
    long double step_width = abs(from-to) / (long double) N; // compute the step width we have to use
    for (size_t n = 0; n < N; ++n) {
        integral_val += 4 / (1 + x*x); // evaluates the function at point x
        x += step_width; // increments the step width accordingly
   	}
    integral_val = integral_val / N; // we finally have to divide by the number of evaluation points
    cout << integral_val << endl; // prints the final result
    return 0;
}
