#include "../../include/utils/matrix2vector.hpp"

utils::Matrix_2_vector::Matrix_2_vector(Matrix *matrix_a) {
    this->matrix_a = matrix_a;
}

vector<double> utils::Matrix_2_vector::execute() {
    vector<double> output_product;

    for (int row = 0; row < matrix_a->get_num_rows(); row++) {
        for (int col = 0; col < matrix_a->get_num_cols(); col++) {
            output_product.push_back(matrix_a->get_value(row, col));
        }
    }
    return output_product;
}
