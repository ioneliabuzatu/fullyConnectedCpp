#include <iostream>
#include "../include/neuron.hpp"

using namespace std;

int main(int argc, char **argv) {
    NeuronUnit *neuron_ = new NeuronUnit(999.9);
    cout << "Neuron value: " << neuron_->get_value() << endl;
    cout << "Neuron activated: " << neuron_->get_activated_value() << endl;
    cout << "Neuron derivative: " << neuron_->get_derivative_activated_value() << endl;
    return 0;
}