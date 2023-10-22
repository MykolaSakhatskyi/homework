#pragma once
int SumParni(int numbersOne, int numbersTwo, int numbersThree, int numbersFour, int numbersFive) {
	int sumEvenNumbers{ 0 };
	int arrayFromArguments[5] = { 0,0,0,0,0 };
	arrayFromArguments[0] = numbersOne;
	arrayFromArguments[1] = numbersTwo;
	arrayFromArguments[2] = numbersThree;
	arrayFromArguments[3] = numbersFour;
	arrayFromArguments[4] = numbersFive;
	for (int counter = 0; counter < 5; counter++) {
		if (arrayFromArguments[counter] % 2 == 0)
			sumEvenNumbers += arrayFromArguments[counter];
	}
	return sumEvenNumbers;
}