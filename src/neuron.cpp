#include "../include/neuron.hpp"
#include <math.h>

using namespace std;


void Neuron::set_value(double value) {
    this->value = value;
    activate_with_sigma_function();
    derivative();
}

Neuron::Neuron(double value) {
    this->value = value;
    activate_with_sigma_function();
    derivative();
}

void Neuron::activate_with_sigma_function() {
    this->activated_value = this->value / (1 + abs(this->value));
}


void Neuron::derivative() {
    this->derivative_activated_value = this->activated_value * (1 - this->activated_value);
}