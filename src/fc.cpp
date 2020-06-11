#ifndef _MODEL_HPP_
#define _MODEL_HPP_

#include "../include/fc.hpp"
#include "../include/matrix.hpp"
#include "../include/layer.hpp"

void FC::set_input(vector<double> input) {
    this->input = input;
    for (int layer_ = 0; layer_ < input.size(); layer_++) {
        this->layers.at(0)->set_value(layer_, input.at(layer_));
    }

}


FC::FC(vector<int> architecture) {
    this->architecture = architecture;
    this->architecture_size = architecture.size();
    for (int layer_ = 0; layer_ < architecture_size; layer_++) {
        Layer *new_layer = new Layer(architecture.at(layer_));
        this->layers.push_back(new_layer);
    }
    for (int layer_ = 0; layer_ < (architecture.size() - 1); layer_++) {
        Matrix *new_matrix = new Matrix(architecture.at(layer_), architecture.at(layer_ + 1));
        this->weighted_matrices.push_back(new_matrix);
    }


}

void FC::print_model_to_stdout() {
    cout << "TOT LAYERS: " << layers.size() << endl;
    for (int layer_ = 0; layer_ < this->layers.size(); layer_++) {
        cout << "LAYER: " << layer_ << endl;
        if (layer_ == 0) {
            Matrix *matrix_ = this->layers.at(layer_)->flatten_matrix_values();
            matrix_->print_matrix_to_stdout();
            cout << "↓" << endl;
        } else {
            Matrix *matrix_ = this->layers.at(layer_)->flatten_matrix_activated_values();
            matrix_->print_matrix_to_stdout();
            cout << "↓" << endl;
        }
    }
}


#endif