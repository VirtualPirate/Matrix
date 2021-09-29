// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "matrix.hpp"

double round_(const double& ref) {
	return round(ref);
}

int main() {
	Matrix<int> matrix_0{
		{1,2,3},
		{3,4,5},
		{6,7,8}
	};

	Matrix<int> matrix_1{
		{1,2,3},
		{3,4,5},
		{6,7,8}
	};

	Matrix<int> matrix_2{
		{1,2,3},
		{3,0,5},
		{6,7,8}
	};

	Matrix<int> matrix_3{
		{2,5},
		{8,10}
	};

	Matrix<int> matrix_4{
		{5,4},
		{50, 40}
	};

	Matrix<int> matrix_5{
		{4},
		{40}
	};

	Matrix<int> matrix_6{
		{6, 9},
		{2, 3}
	};

	Matrix<int> matrix_7{
		{2, 6, 0},
		{7, 9, 8}
	};

	Matrix<int> matrix_8{
		{1, 2, 4},
		{-1, 3, 0},
		{4, 1, 0}
	};

	Matrix<int> matrix_9{
		{2, 4},
		{-1 ,2}
	};

	Matrix<int> matrix_10{
		{4, 8, 90, 23},
		{3, 7, 6, 5},
		{4, 7, 13, -3},
		{3, -7, -17, 12 }
	};

	Matrix<int> matrix_11{
		{4, 8, 90, 23},
		{3, 7, 6, 5},
		{3, 7, 6, 50},
		{3, -7, -17, 12 }
	};

	Matrix<char> matrix_12{
		{'a', 'a', 'a'},
		{'b', 'b', 'b'},
		{'c', 'c', 'c'}
	};

	Matrix<double> matrix_13{
		{2, 3},
		{1, 4}
	};

	Matrix<double> matrix_14{
		{2, 3, 4},
		{4, 2, 5},
		{6, 4, 2}
	};

	Matrix<double> matrix_15{
		{1, 3, 3},
		{1, 4, 3},
		{1, 3, 4}
	};
	// matrix_0.print();
	/*
	std::cout << matrix_0[0][2] << std::endl;
	std::cout << matrix_0[2][1] << std::endl;
	std::cout << matrix_0[2][0] << std::endl;
	std::cout << matrix_0[1][1] << std::endl;
	std::cout << matrix_0[1][0] << std::endl;
	std::cout << matrix_0[2][2] << std::endl;
	
	std::cout << matrix_0 << std::endl;
	std::cout << (matrix_0 == matrix_1) << std::endl;
	std::cout << (matrix_2 == matrix_1) << std::endl;

	std::cout << (matrix_0 + matrix_1) << std::endl;

	std::cout << matrix_3 << std::endl;
	std::cout << matrix_4 << std::endl;
	std::cout << matrix_3[1][0] << std::endl;

	std::cout << (matrix_3 * matrix_4) << std::endl;
	std::cout << (matrix_3 * matrix_5) << std::endl;
	*/

	//std::cout << (matrix_6 * matrix_7) << std::endl;
	//std::cout << matrix_7.transpose() << std::endl;

	//std::cout << matrix_2.minor(1, 1) << std::endl;

	//std::cout << matrix_11.determinant() << std::endl;
	//std::cout << matrix_12.transpose() << std::endl;

	//std::cout << matrix_14.adjoint() << std::endl;
	std::cout << (matrix_14 * matrix_14.inverse()).map(round_) << std::endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
