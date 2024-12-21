#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){

    //Definindo os elementos de uma matriz

    Matrix4d matrix;

    std::cout << "Insira os elementos da matriz 4x4 linha por linha" << std::endl;

    for(int i=0; i<4; ++i){
        for(int j=0; j<4; j++){

            std::cin >> matrix(i,j);
        }
    }

    // Cálculo do determinante

    double determinant = matrix.determinant();

    std::cout << "\n Determinante:  " << determinant << std::endl;

    //Cálculo dos autovalores e autovetores

    EigenSolver <Matrix4d> es(matrix);

    std::cout << "\nautovalores:\n" << es.eigenvalues() << std::endl;

    std::cout << "\n autovetores \n";

    for(int i=0; i<4; i++){

        std::cout << "Autovetor "<< i+1 << ":\n" << es.eigenvectors().col(i) << std::endl;

    }

return 0;

}