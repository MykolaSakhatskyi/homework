#pragma once
int findTheSumOfProductsOfTwoAdjacentNumbers(int firstNumber, int secondNumber, int thirdNumber) {
	return firstNumber * secondNumber + secondNumber * thirdNumber;
}
int findTheSumOfProductsOfTwoAdjacentNumbers(int _array[], int arraySize) {
	int sumOfProducts{ 0 };
	for (int i = 0; i < arraySize - 1; i++)
	{
		sumOfProducts += _array[i] * _array[i + 1];
	}
	return sumOfProducts;
}