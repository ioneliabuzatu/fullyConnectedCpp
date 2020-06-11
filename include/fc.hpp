#ifndef __FC__HPP_
#define __FC__HPP_

#include <iostream>
#include <vector>
#include "matrix.hpp"
#include "layer.hpp"

using namespace std;

class FC {
public:
    FC(vector<int> architecture);

    void set_input(vector<double> input);

    void print_model_to_stdout();

    void feed_forward_move();

    Matrix *get_matrix(int index_) { return this->layers.at(index_)->flatten_matrix_values(); };

    Matrix *get_activated_matrix(int index_) { return this->layers.at(index_)->flatten_matrix_activated_values(); };

    Matrix *get_derived_matrix(int index_) { return this->layers.at(index_)->flatten_matrix_derivative_values(); };


private:

    vector<int> architecture;
    int architecture_size;
    vector<Layer *> layers;
    vector<Matrix *> weighted_matrices;
    vector<double> input;
};


#endif