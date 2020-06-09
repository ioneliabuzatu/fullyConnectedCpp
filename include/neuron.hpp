#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>

using namespace std;

class Neuron {
public:

    Neuron(double value);
    void set_value(double val);

    void activate_with_sigma_function(); // f(x) = x/(1+|x|)
    void derivative(); // f'(x) = f(x) * (1-f(x))

    double get_value() { return this->value; }
    double get_activated_value() { return this->activated_value; }
    double get_derivative_activated_value() { return this->derivative_activated_value; }

private:
    double value;
    double activated_value;
    double derivative_activated_value;
};

#endif