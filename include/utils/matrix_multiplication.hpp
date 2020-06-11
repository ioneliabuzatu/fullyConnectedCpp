#ifndef __MATRIX_MULTIPLICATION_HPP_
#define __MATRIX_MULTIPLICATION_HPP_

#include <iostream>
#include <vector>
#include "../matrix.hpp"
#include <assert.h>

using namespace std;

namespace utils {
    class Matrix_multiplication {
    public:
        Matrix_multiplication(Matrix *matrix_a, Matrix *matrix_b);

        Matrix *execute();

    private:
        Matrix *matrix_a;
        Matrix *matrix_b;
        Matrix *matrix_c;
    };
}
#endif
