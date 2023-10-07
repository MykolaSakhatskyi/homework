#include <iostream>
#include <math.h>

int main() {
	setlocale(LC_ALL, "");
	//1) Дано
	//час(години, хвилини, секунди).Знайти кількість секунд, які пройшли від початку доби.
	//Доступ до вхідних та результуючих даних програми виконувати через вказівники
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;
	int hours{ 0 };
	int minuts{ 0 };
	int seconds{ 0 };
	int* ptrHours = &hours;
	int* ptrMinuts = &minuts;
	int* ptrSeconds = &seconds;
	std::cout << "Please enter the current hours" << std::endl;
	std::cin >> *ptrHours;
	std::cout << "Please enter the current minutes" << std::endl;
	std::cin >> *ptrMinuts;
	std::cout << "Please enter the current seconds" << std::endl;
	std::cin >> *ptrSeconds;
	std::cout << (*ptrHours * 3600) + (*ptrMinuts * 60) + *ptrSeconds << " seconds have passed since the beginning of the day" << std::endl;


	//2)  Створити 3 динамічних змінних різного типу.Заповнити їх деякими значеннями.
	// Вивести значення динамічних змінних на екран, обчислити добуток та середнє арифметичне.Звільнити пам’ять.
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl;
	int* newIntValue = new int(0);
	double* newDoubleValue = new double(0.0);
	float* newFloatValue = new float(0.f);
	std::cout << "Please enter integer number" << std::endl;
	std::cin >> *newIntValue;
	std::cout << "Please enter double number" << std::endl;
	std::cin >> *newDoubleValue;
	std::cout << "Please enter float number" << std::endl;
	std::cin >> *newFloatValue;
	std::cout << "The product of numbers = " << (*newIntValue * *newDoubleValue * *newFloatValue) << std::endl;
	std::cout << "Arithmetic mean of numbers = " << (*newIntValue + *newDoubleValue + *newFloatValue) / 3 << std::endl;
	delete newIntValue, newDoubleValue, newFloatValue;
	newIntValue = nullptr;
	newDoubleValue = nullptr;
	newFloatValue = nullptr;

	//3)  Дано цілочислові масиви А і В.Додати у кінець масиву А елементи з масиву В, кратні 3 або 7.
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	int sizeArrayA = 3;
	int numberOfElementsMultiplesOf3Or7FromArrayB = 0;
	int* _arrayA = new int[sizeArrayA];
	_arrayA[0] = 3;
	_arrayA[1] = 5;
	_arrayA[2] = 23;
	int _arrayB[7] = { 7, 5, 8, 21, 15, 34, 49 };
	for (int counter = 0; counter < 7; counter++) {
		if (_arrayB[counter] % 3 == 0 || _arrayB[counter] % 7 == 0) {
			numberOfElementsMultiplesOf3Or7FromArrayB++;
		}
	}
	int sizeArrayC = sizeArrayA + numberOfElementsMultiplesOf3Or7FromArrayB;
	int* _arrayC = new int[sizeArrayC];
	for (int counter = 0; counter < sizeArrayA; counter++) {
		_arrayC[counter] = _arrayA[counter];
	}
	int counterForArrayC = numberOfElementsMultiplesOf3Or7FromArrayB - 1;
	for (int counter = 0; counter < 7; counter++) {
		if (_arrayB[counter] % 3 == 0 || _arrayB[counter] % 7 == 0) {
			_arrayC[counterForArrayC] = _arrayB[counter];
			counterForArrayC++;
		}
	}
	delete[] _arrayA;
	_arrayA = _arrayC;
	for (int counter = 0; counter < sizeArrayC; counter++) {
		std::cout << _arrayA[counter] << std::endl;
	}
	delete[] _arrayA, _arrayC;
	_arrayA = nullptr;
	_arrayC = nullptr;

	//Дано масив цілих чисел.Якщо перший елемент масиву є парним числом, то видалити із
	//масиву всі парні числа, інакше – навпаки(видалити непарні числа).
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	int arraySize = 0;
	int changedArraySize = 0;
	int counterEvenNumbers = 0;
	int counterNonEvenNumbers = 0;
	std::cout << "Please input the amount of array elements" << std::endl;
	std::cin >> arraySize;
	int* _array = new int[arraySize];
	std::cout << "Please fill array by ints numbers" << std::endl;
	for (int counter = 0; counter < arraySize; counter++) {
		std::cin >> _array[counter];
		if (_array[counter] % 2 != 0) {
			counterNonEvenNumbers++;
		}
		else
			counterEvenNumbers++;
	}
	if (_array[0] % 2 != 0)
		changedArraySize = counterEvenNumbers;
	else
		changedArraySize = counterNonEvenNumbers;
	
	int* arrayWithEvenOrNonEvenNumbers = new int[changedArraySize];
	int counterForNewArray = 0;
	if (_array[0] % 2 != 0) {
		for (int counter = 0; counter < arraySize; counter++) {
			if (_array[counter] % 2 == 0) {
				arrayWithEvenOrNonEvenNumbers[counterForNewArray] = _array[counter];
				counterForNewArray++;
			}
		}
	}
	else {
		for (int counter = 0; counter < arraySize; counter++) {
			if (_array[counter] % 2 != 0) {
				arrayWithEvenOrNonEvenNumbers[counterForNewArray] = _array[counter];
				counterForNewArray++;
			}
		}
	}
	
	delete[] _array;
	_array = arrayWithEvenOrNonEvenNumbers;
	std::cout << "Elements of array after changing:" << std::endl;
	for (int counter = 0; counter < changedArraySize; counter++) {
		std::cout << _array[counter] << std::endl;
	}
	delete[] _array, arrayWithEvenOrNonEvenNumbers;
	_array = nullptr;
	arrayWithEvenOrNonEvenNumbers = nullptr;

	//Дано масив цілих чисел. Видалити з масиву усі непарні числа.
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	int arraySize5 = 0;
	int changedArraySize5 = 0;
	int counterEvenNumbers5 = 0;
	std::cout << "Please input the amount of array elements" << std::endl;
	std::cin >> arraySize5;
	int* _array5 = new int[arraySize5];
	std::cout << "Please fill array by ints numbers" << std::endl;
	for (int counter = 0; counter < arraySize5; counter++) {
		std::cin >> _array5[counter];
		if (_array5[counter] % 2 == 0) {
			counterEvenNumbers5++;
		}
	}
	changedArraySize5 = counterEvenNumbers5;
	int* arrayWithEvenNumbers = new int[changedArraySize5];
	int counterForNewArray5 = 0;
	if (_array5[0] % 2 == 0) {
		for (int counter = 0; counter < arraySize5; counter++) {
			if (_array5[counter] % 2 == 0) {
				arrayWithEvenNumbers[counterForNewArray5] = _array5[counter];
				counterForNewArray5++;
			}
		}
	}

	delete[] _array5;
	_array5 = arrayWithEvenNumbers;
	std::cout << "Elements of array after changing:" << std::endl;
	for (int counter = 0; counter < changedArraySize5; counter++) {
		std::cout << _array5[counter] << std::endl;
	}
	delete[] _array5, arrayWithEvenNumbers;
	_array5 = nullptr;
	arrayWithEvenNumbers = nullptr;

	//6) Дано масив цілих чисел.Перед кожним елементом масиву вставити число, що рівне
	//останній цифрі елемента.Наприклад, масив A = { 12, 23, 89, 50 } 
	// має бути перетворений до{ 2, 12, 3, 23, 9, 89, 0, 50 }.
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	int arraySize6 = 4;
	int changedArraySize6 = arraySize6 * 2;
	int* _array6 = new int[arraySize6];
	_array6[0] = 12;
	_array6[1] = 23;
	_array6[2] = 89;
	_array6[3] = 50;
	int* arrayWithChanges = new int[changedArraySize6];
	int counterForTheNextElementOfArrayWithChanges = 1;
	int counterForThePreviousElementOfArrayWithChanges = 0;
	std::cout << "Elements of arrays before changes" << std::endl;
	for (int counter = 0; counter < arraySize6; counter++) {
		arrayWithChanges[counterForThePreviousElementOfArrayWithChanges] = _array6[counter] % 10;
		arrayWithChanges[counterForTheNextElementOfArrayWithChanges] = _array6[counter];
		counterForTheNextElementOfArrayWithChanges += 2;
		counterForThePreviousElementOfArrayWithChanges += 2;
		std::cout << _array6[counter] << std::endl;
	}
	delete[] _array6;
	_array6 = arrayWithChanges;
	std::cout << "Elements of arrays after changes" << std::endl;
	for (int counter = 0; counter < changedArraySize6; counter++) {
		std::cout << _array6[counter] << std::endl;
	}
	delete[] _array6, arrayWithChanges;
	_array6 = nullptr;
	arrayWithChanges = nullptr;


	//7)  Дано рядок.Замінити кожний символ ’ + ’ у рядку на символ ’ - ’.
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	char string[] = "Poriadok + robota + navchania = HALEPA";
	for (int counter = 0; counter < strlen(string); counter++) {
		if (string[counter] == '+') {
			string[counter] = '-';
		}
		std::cout << string[counter];
	}
	std::cout << "" << std::endl;


	//8) Дано рядок.Написати функцію, яка повертає кількість цифр у рядку.
	// Перевірити роботу функції.
	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	char string8[] = "He was born in 1987, he was 12 years old at that time";
	int counterOfNumbersInTheString{ 0 };
	for (int counter = 0; counter < strlen(string8); counter++) {
		if ((48 <= (int)string8[counter]) && ((int)string8[counter] <= 57))
			counterOfNumbersInTheString++;
	}
	std::cout << string8 << std::endl;
	if (counterOfNumbersInTheString > 0) {
		std::cout << "String has " << counterOfNumbersInTheString << " numbers." << std::endl;
	}
	else
		std::cout << "String doesn't have numbers." << std::endl;

	
	//9) Дано рядок.Замінити у рядку кожну латинську букву наступною про алфавіту
	// (букв ‘z’, ‘Z’ замінювати буквою ‘a’, ‘A’).Наприклад,рядок  “Zebra has two colors” має
	//перетворитися на “Afcsb ibt uxp dpmpst”.Написати відповідну функцію шифрування рядка.
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	char string9[] = "Zebra has two colors";
	for (int counter = 0; counter < strlen(string9); counter++) {
		if (string9[counter] == 'Z')
			string9[counter] = 'A';
		else if (string9[counter] == 'z')
			string9[counter] = 'a';
		else if (string9[counter] == ' ')
			string9[counter] = string9[counter];
		else
			string9[counter] = (char)(string9[counter] + 1);
		std::cout << string9[counter];
	}
	std::cout << "" << std::endl;

	//10) Дано масив символів.Кожну групу з повторів деякого символу замінити одним його входженням.
	std::cout << "---------------------------- TASK 10 ------------------------------" << std::endl;
	char* string10 = new char[31] {"Thiis texxxt has miiiistttakes"};
	int numberOfRepeatingCharacters{ 0 };
	for (int counter = 0; counter < strlen(string10); counter++) {
		if (string10[counter] == string10[counter + 1])
			numberOfRepeatingCharacters++;
	}
	int sizeChangedString = strlen(string10) - numberOfRepeatingCharacters + 2;
	char* stringWithChanges10 = new char[sizeChangedString];
	for (int counter = 0; counter < strlen(string10); counter++) {
		if (string10[counter] == string10[counter + 1]) {
			continue;
		}
		else {
			stringWithChanges10[counter] = string10[counter];
		}
		std::cout << stringWithChanges10[counter];
	}

	delete[] string10, stringWithChanges10;
	string10 = nullptr;
	stringWithChanges10 = nullptr;

	return 0;
}