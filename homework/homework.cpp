#include <iostream>
#include "funtionsForTaskOne.h"
#include "funtionsForTaskTwo.h"
#include "funtionsForTaskThree.h"
#include "funtionsForTaskFour.h"
#include "funtionsForTaskFive.h"
#include "funtionsForTaskSix.h"
#include "funtionsForTaskSeven.h"
#include "funtionsForTaskEight.h"
#include "funtionsForTaskNine.h"
#include "funtionsForTaskTen.h"

int main()
{
	//1.Написати функцію, яка отримує номер місяця і повертає кількість днів у цьому місяці.
	// Написати функцію, яка по номеру місяця виводить його назву.За допомогою цих
	// двох функцій вивести на екран назви місяців та кількість днів у кожному місяці.
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;
	int userMonth{ 0 };
	for (int counter = 1; counter < 13; counter++) {
		nameOfMonth(counter);
		std::cout <<" has "<< numberOfDaysInMonth(counter)<<" days"<<std::endl;
	}

	//2. Написати функцію Sum(N), яка повертає суму цілих чисел N, 
	// які були аргументами функції у вигляді : 1·N1 + 2  N2 + 3·N3 + …, де  N1, N2, … - аргументи
	// першого, другого і т.д.виклику функції.
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl; 
	int sizeArray2{ 0 };
	int sumOfNumbers2{ 0 };
	std::cout << "Please enter array size" << std::endl;
	std::cin >> sizeArray2;
	int* _array2 = new int[sizeArray2];
	std::cout << "Please fill array by int numbers" << std::endl;
	for (int counter = 0; counter < sizeArray2; counter++) {
		std::cin >> _array2[counter];
		sumOfNumbers2 += Sum(_array2[counter], (counter + 1));
	}
	std::cout << "Sum of numbers = " << sumOfNumbers2 << std::endl;
	delete[] _array2;



	//3.Написати функцію SumParni(N), яка повертає суму парних серед  цілих чисел N, які були аргументами функції.
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	int numbersOne{ 0 };
	int numbersTwo{ 0 };
	int numbersThree{ 0 };
	int numbersFour{ 0 };
	int numbersFive{ 0 };
	std::cout << "Please enter five numbers" << std::endl;
	std::cin >> numbersOne;    
	std::cin >> numbersTwo;
	std::cin >> numbersThree;
	std::cin >> numbersFour;
	std::cin >> numbersFive;
	std::cout<< "Sum of even numbers = " << SumParni(numbersOne, numbersTwo, numbersThree, numbersFour, numbersFive)<<std::endl;
	
	//4. Написати функцію Count(N), яка повертає кількість одноцифрових цілих чисел N, які були аргументами функції.
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	int numberOne{ 0 };
	int numberTwo{ 0 };
	int numberThree{ 0 };
	int numberFour{ 0 };
	int numberFive{ 0 };
	std::cout << "Please enter five numbers" << std::endl;
	std::cin >> numberOne;
	std::cin >> numberTwo;
	std::cin >> numberThree;
	std::cin >> numberFour;
	std::cin >> numberFive;
	std::cout << "Count of single digit numbers = " << Count(numberOne, numberTwo, numberThree, numberFour, numberFive) << std::endl;
			
    //5. Написати функцію Avg(N), яка повертає середнє арифметичне дробових чисел N, які були аргументами функції.
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	int sizeArray = 0;
	double averageOfNumbers{ 0.0 };
	std::cout << "Please enter array size" << std::endl;
	std::cin >> sizeArray;
	double* _array = new double[sizeArray];
	std::cout << "Please fill array by double numbers" << std::endl;
	for (int counter = 0; counter < sizeArray; counter++) {
		std::cin >> _array[counter];
	}
	for (int counter = 0; counter <= sizeArray; counter++) {
		if (counter == sizeArray) {
			averageOfNumbers = Avg(0, averageOfNumbers, sizeArray);
		}
		else
			averageOfNumbers = Avg(_array[counter], averageOfNumbers, 1);
	}

	std::cout << "Average of numbers = " << averageOfNumbers << std::endl;
	delete[] _array;

	//6. Написати функцію Count(N), яка повертає кількість ненульових дробових чисел N, які були аргументами функції.
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	int sizeArrayTask6 = 0;
	int nonZeroCounter{ 0 };
	std::cout << "Please enter array size" << std::endl;
	std::cin >> sizeArrayTask6;
	double* _array6 = new double[sizeArrayTask6];
	std::cout << "Please fill array by double numbers" << std::endl;
	for (int counter = 0; counter < sizeArrayTask6; counter++) {
		std::cin >> _array6[counter];
		nonZeroCounter += Count(_array6[counter]);
	}
	std::cout << "Count of non - zero numbers = " << nonZeroCounter << std::endl;
	delete[] _array6;


	//7. Написати  перевантажені функції для пошуку найбільшого з двох, трьох цілих чисел та  найбільшого
	// значення у одновимірному цілочисловому масиві.
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	int someNumberForComparisonOne{ 2 };
	int someNumberForComparisonTwo{ 1 };
	int someNumberForComparisonThree{ 5 };
	const int _arraySize7{ 4 };
	int _array7[_arraySize7] = { 3, 5, 9, -12 };
	std::cout << "First number = " << someNumberForComparisonOne << std::endl;
	std::cout << "Second number = " << someNumberForComparisonTwo << std::endl;
	std::cout << "Third number = " << someNumberForComparisonThree << std::endl;
	std::cout << "Array elements = [";
	ShowArrayElements(_array7, _arraySize7);
	std::cout <<"]" << std::endl;
	std::cout << "Max number from firs two numbers = " << findLargestNumber(someNumberForComparisonOne, someNumberForComparisonTwo) << std::endl;
	std::cout << "Max number from three numbers = " << findLargestNumber(someNumberForComparisonOne, someNumberForComparisonTwo, someNumberForComparisonThree) << std::endl;
	std::cout << "Max number in array = " << findLargestNumber(_array7,_arraySize7) << std::endl;


	//8. Написати  перевантажені функції для пошуку кількості двоцифрових чисел у одновимірному масиві цілих, 
	// у двовимірному  масиві цілих розміру  Nx3.
	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	int arraySize8 = 0;
	std::cout << "Please enter size of One-dimensional array" << std::endl;
	std::cin >> arraySize8;
	int* _array8 = new int[arraySize8];
	std::cout << "Elements in One-dimensional array = [";
	for (int counter = 0; counter < arraySize8; counter++) {
		_array8[counter] = rand() % 200;
		std::cout << " " << _array8[counter] << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << "Count of two digits numbers in One-dimensional array = "<< FindTwoDigitsNumbers(_array8, arraySize8) << std::endl;
	delete[] _array8;

	int rowsSize{ 0 };
	int colsSize{ 0 };
	std::cout << "Please enter rows size of Two-dimensional array" << std::endl;
	std::cin >> rowsSize;
	std::cout << "Please enter columns size of Two-dimensional array" << std::endl;
	std::cin >> colsSize;
	int **_array_8 = new int* [rowsSize];
	for (int counter = 0; counter < rowsSize; counter++) {
		_array_8[counter] = new int[colsSize];
	}
	for (int rows = 0; rows < rowsSize; rows++) {
		for (int cols = 0; cols < colsSize; cols++) {
			_array_8[rows][cols] = rand() % 200;
		}
	}
	std::cout << "Elements in Two-dimensional array :" << std::endl;
	for (int rows = 0; rows < rowsSize; rows++) {
		for (int cols = 0; cols < colsSize; cols++) {
			std::cout << _array_8[rows][cols] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "Count of two digits numbers in Two-dimensional array = " << FindTwoDigitsNumbers(_array_8, rowsSize, colsSize) << std::endl;
	for (int counter = 0; counter < rowsSize; counter++) {
		delete[] _array_8[counter];
	}
	delete[] _array_8;
	
	//9. Написати  перевантажені функції для обчислення суми добутків 
	// двох сусідніх чисел для трьох цілих чисел та у одновимірному  масиві цілих чисел.
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	int someFirstNumber9{1 + rand() % 100 };
	int someSecondNumber9{1 + rand() % 100 };
	int someThirdNumber9{1 + rand() % 100 };
	std::cout << "First number = " << someFirstNumber9 << std::endl;
	std::cout << "Second number = " << someSecondNumber9 << std::endl;
	std::cout << "Third number = " << someThirdNumber9 << std::endl;
	std::cout << "Sum of products of two adjacent numbers = " << findTheSumOfProductsOfTwoAdjacentNumbers(someFirstNumber9, someSecondNumber9, someThirdNumber9) << std::endl;
	int arraySize9{ 0 };
	std::cout << "Please enter size of array" << std::endl;
	std::cin >> arraySize9;
	int* _array9 = new int[arraySize9];
	std::cout << "Elements in One-dimensional array = [";
	for (int counter = 0; counter < arraySize9; counter++) {
		_array9[counter] = 1 + rand() % 100;
		std::cout << " " << _array9[counter] << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << "Sum of products of two adjacent numbers in array = " << findTheSumOfProductsOfTwoAdjacentNumbers(_array9, arraySize9) << std::endl;
	delete[] _array9;

	//10.  Написати  перевантажені функції для пошуку середнього арифметичного для двох, 
	// трьох цілих чисел та у одновимірному цілочисловому масиві.
	std::cout << "---------------------------- TASK 10 ------------------------------" << std::endl;
	int someFirstNumber10{ 1 + rand() % 100 };
	int someSecondNumber10{ 1 + rand() % 100 };
	int someThirdNumber10{ 1 + rand() % 100 };
	std::cout << "First number = " << someFirstNumber10 << std::endl;
	std::cout << "Second number = " << someSecondNumber10 << std::endl;
	std::cout << "Third number = " << someThirdNumber10 << std::endl;
	std::cout << "Average Of First two Numbers = " << FindAverageOfNumbers(someFirstNumber10, someSecondNumber10) << std::endl;
	std::cout << "Average Of three Numbers = " << FindAverageOfNumbers(someFirstNumber10, someSecondNumber10, someThirdNumber10) << std::endl;
	int arraySize10{ 0 };
	std::cout << "Please enter size of array" << std::endl;
	std::cin >> arraySize10;
	int* _array10 = new int[arraySize10];
	std::cout << "Elements of array = [";
	for (int counter = 0; counter < arraySize10; counter++) {
		_array10[counter] = 1 + rand() % 100;
		std::cout << " " << _array10[counter] << " ";
	}
	std::cout << "]" << std::endl;
	std::cout << "Average Of numbers in array = " << FindAverageOfNumbers(_array10, arraySize10) << std::endl;
	delete[] _array10;
	
	return 0;
}


