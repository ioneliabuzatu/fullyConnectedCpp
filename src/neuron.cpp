#include "../include/neuron.hpp"

NeuronUnit::NeuronUnit(double value) {
    this->value = value;
    activate_with_sigma_function();
    derivative();
}

void NeuronUnit::activate_with_sigma_function() {
    this->activated_value = this->value / (1 + abs(this->value));
}


void NeuronUnit::derivative() {
    this->derivative_activated_value = this->activated_value * (1 - this->activated_value);
}


