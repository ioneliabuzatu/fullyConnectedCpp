#ifndef __MATRIX_2_VECTOR_HPP__
#define __MATRIX_2_VECTOR_HPP__
#include "../matrix.hpp"

using namespace std;

namespace utils {
    class Matrix_2_vector {
    public:
        Matrix_2_vector(Matrix *matrix_a);
        vector<double> *execute;

    private:
        Matrix *matrix_a;
    };
}




#endif
