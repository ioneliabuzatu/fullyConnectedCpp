#include "../../include/utils/matrix_multiplication.hpp"


utils::Matrix_multiplication::Matrix_multiplication(Matrix *matrix_a, Matrix *matrix_b) {
    this->matrix_a = matrix_a;
    this->matrix_b = matrix_b;
    this->matrix_c = matrix_c;

    if (matrix_a->get_num_cols() != matrix_b->get_num_rows()) {
        cerr << "Matrices shape don't match!  [a_col,a_row] and [b_col,b_row] where a_row == b_col" << enld;
        assert(false);
    }
    this->matrix_c = new Matrix(matrix_a->get_num_rows(), matrix_b->get_num_cols());
}

Matrix *utils::Matrix_multiplication::execute() {
    for (int row = 0; row < matrix_a->get_num_rows(); row++) {
        for (int col = 0; col < matrix_b->get_num_cols(); col++) {
            for (int row_b = 0; row_b < matrix_b->get_num_rows(); row_b++) {
                double product = this->matrix_a->get_value(row, row_b) * this->matrix_b->get_value(row_b, col);
                double output_value = this->matrix_c->get_value(row, col) + product;
                this->matrix_c->set_value(row, col, output_value);
            }
        }
    }
}


