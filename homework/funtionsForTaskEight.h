#pragma once
int FindTwoDigitsNumbers(int _array[], int arraySize) {
	int counterTwoDigitsNumbers{ 0 };
	for (int counter = 0; counter < arraySize; counter++) {
		if (_array[counter] >= 10 && _array[counter] - 100 <= 10 && _array[counter] < 100)
			counterTwoDigitsNumbers++;
	}
	return counterTwoDigitsNumbers;
}
int FindTwoDigitsNumbers(int** _array, int rows, int cols) {
	int counterTwoDigitsNumbers{ 0 };
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			if (_array[i][j] >= 10 && _array[i][j] - 100 <= 10 && _array[i][j] < 100)
				counterTwoDigitsNumbers++;
	}
	return counterTwoDigitsNumbers;
}