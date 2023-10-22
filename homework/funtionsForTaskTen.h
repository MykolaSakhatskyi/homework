#pragma once
double FindAverageOfNumbers(double firstNumber, double secondNumber) {
	return (firstNumber + secondNumber) / 2.0;
}
double FindAverageOfNumbers(double firstNumber, double secondNumber, double thirdNumber) {
	return (firstNumber + secondNumber + thirdNumber) / 3.0;
}
double FindAverageOfNumbers(int _array[], double arraySize) {
	double sumOfNumbers{ 0 };
	for (int i = 0; i < arraySize - 1; i++)
	{
		sumOfNumbers += _array[i];
	}
	return (sumOfNumbers / arraySize);
}