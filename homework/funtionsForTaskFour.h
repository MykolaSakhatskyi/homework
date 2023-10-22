#pragma once
int Count(int numbersOne, int numbersTwo, int numbersThree, int numbersFour, int numbersFive) {
	int countOfSingleDigitNumber{ 0 };
	int arrayFromArguments[5] = { 0,0,0,0,0 };
	arrayFromArguments[0] = numbersOne;
	arrayFromArguments[1] = numbersTwo;
	arrayFromArguments[2] = numbersThree;
	arrayFromArguments[3] = numbersFour;
	arrayFromArguments[4] = numbersFive;
	for (int counter = 0; counter < 5; counter++) {
		if (arrayFromArguments[counter] > 0 && arrayFromArguments[counter] - 10 < 0)
			countOfSingleDigitNumber++;
		else if (arrayFromArguments[counter] < 0 && arrayFromArguments[counter] + 10 > 0)
			countOfSingleDigitNumber++;
		else if (arrayFromArguments[counter] == 0)
			countOfSingleDigitNumber++;
	}
	return countOfSingleDigitNumber;
}