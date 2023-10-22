#pragma once
int findLargestNumber(int numberOne, int numberTwo) {
	if (numberOne > numberTwo)
		return numberOne;
	else
		return numberTwo;
}
int findLargestNumber(int numberOne, int numberTwo, int numberThree) {
	
	if (numberThree > findLargestNumber(numberOne, numberTwo))
		return numberThree;
	else
		return findLargestNumber(numberOne, numberTwo);
}
int findLargestNumber(int array[], int size) {
	int maxArrayNumber{ 0 };
	for (int counter = 0; counter < size; counter++) {
		if (maxArrayNumber < array[counter])
			maxArrayNumber = array[counter];
	}
	return maxArrayNumber;
}
void ShowArrayElements (int array[], int size) {
	for (int counter = 0; counter < size; counter++)
		std::cout << array[counter] << " ";
}