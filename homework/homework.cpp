#include <iostream>
#include <math.h>

int main() {
	setlocale(LC_ALL, "");
	//1) Оголосити одновимірний масив з 10 елементів типу int. 
	//Заповнити його значеннями з клавіатури, вивести на екран та підрахувати добуток елементів масиву
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;
	int _array[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int productOfArrayElements{ 1 };
	std::cout << "Please enter 10 int numbers" << std::endl;
	for (int counter = 0; counter < 10; counter++) {
		std::cin >> _array[counter];
		productOfArrayElements *= _array[counter];
	}
	std::cout << "Product Of Array Elements = "<< productOfArrayElements << std::endl;

	//2) Оголосити одновимірний масив з 7 елементів типу int.
	//Заповнити його випадковими значеннями в діапазоні [-12..+50] та вивести на екран.
	//Підрахувати кількість відємних та додатніх елементів масиву.
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl;
	int _array2[7] = { -12, 3, -9, 23, 50, 34, -10 };
	int positiveNumbers{ 0 };
	int negativeNumbers{ 0 };
	for (int counter = 0; counter < 7; counter++) {
		std::cout << counter + 1 << " element of array = " << _array2[counter] << std::endl;
		if (_array2[counter] > 0)
			positiveNumbers++;
		else
			negativeNumbers++;
	}
	std::cout << "Positive Numbers = "<< positiveNumbers << std::endl;
	std::cout << "Negative Numbers = " << negativeNumbers << std::endl;

//3) Оголосити, проініціалізувати початковими значеннями та вивести одновимірний масив з 7 елементів типу long.
//Визначити суму парних елементів масиву
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	long _array3[7] = { - 11L, 34L, -69L, 3L, 5L, -72L, 101L};
	long sumOfPositiveNumbers{ 0L };
	for (int counter = 0; counter < 7; counter++) {
		std::cout << counter + 1 << " element of array = " << _array3[counter] << std::endl;
		if (_array3[counter] > 0)
			sumOfPositiveNumbers += _array3[counter];
	}
	std::cout << "Sum Of Positive Numbers = " << sumOfPositiveNumbers << std::endl;

	//4) Утворити одновимірний масив розміром 30. Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, ... ). 
	//Вивести елементи масиву на екран у прямому і оберненому порядку.
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	int _array4[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	_array4[0] = 1;
	int countdownCounter{ 29 };
	for (int counter = 1; counter < 30; counter++) {
		_array4[counter] = _array4[counter - 1] * 2;
	}
	for (int counter = 0; counter < 30; counter++) {
		std::cout << counter + 1 << " element of array = " << _array4[counter] << ", " << countdownCounter + 1<< " element of array = " << _array4[countdownCounter] << std::endl;
		countdownCounter--;
	}

//5) Дано одновимірний масив. Замінити всі від’ємні елементи їх модулями.
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	int _array5[7] = { -12, 3, -9, 23, 50, 34, -10 };
	for (int counter = 0; counter < 7; counter++) {
		if (_array5[counter] < 0)
			_array5[counter] = abs(_array5[counter]);
		
		std::cout << counter + 1 << " element of array = " << _array5[counter] << std::endl;
	}

//6) Дано одновимірний масив. Знайти найбільший та найменший елементи масиву та поміняти їх у масиві місцями.
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	int _array6[7] = { -12, 3, -9, 23, 50, 34, -10 };
	int maxElementOfArray{ 0 };
	int minElementOfArray{ 0 };
	for (int counter = 0; counter < 7; counter++) {
		if (_array6[counter] < minElementOfArray)
			minElementOfArray = _array6[counter];
		else if (_array6[counter] > maxElementOfArray)
			maxElementOfArray = _array6[counter];
	}
	std::cout << "Array value before and after changes"<<std::endl;
	for (int counter = 0; counter < 7; counter++) {
		std::cout << _array6[counter] << " ";
		if (_array6[counter] == minElementOfArray)
			_array6[counter] = maxElementOfArray;
		else if (_array6[counter] == maxElementOfArray)
			_array6[counter] = minElementOfArray;
		std::cout << _array6[counter] << std::endl;
	}
	

//7) Дано одновимірний масив. Знайти суму елементів з непарними індексами.
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	int _array7[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int sumOfNonEvenElements{ 0 };
	std::cout << "Please enter 10 int numbers" << std::endl;
	for (int counter = 0; counter < 10; counter++) {
		std::cin >> _array7[counter];
		if(counter%2 !=0)
			sumOfNonEvenElements += _array7[counter];
	}
	std::cout << "Sum Of non even Array Elements = " << sumOfNonEvenElements << std::endl;

//8) Дано одновимірний масив. Знайти скільки елементів знаходиться між першим і останнім відємним елементом.
	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	int _array8[7] = { 12, -3, -9, 23, 50, -34, 10 };
	int firstNonEvenElement{ 0 };
	int lastNonEvenElement{ 0 };
	for (int counter = 0; counter < 7; counter++) {
		if (_array8[counter] < 0) {
			firstNonEvenElement = counter;
			break;
		}
	}
	for (int counter = 0; counter < 7; counter++) {
		if (_array8[counter] < 0)
			lastNonEvenElement = counter;
	}
	std::cout << "The number of array elements between the first and last negative elements = " << (lastNonEvenElement - firstNonEvenElement - 1) << std::endl;
	
	//9) Дано одновимірний масив. Поміняти місцями перший елемент з другим, третій з четвертим, і т.д. 
	//Вивести змінений масив на екран.
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	int _array9[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int changedFirstElement{0};
	int changedSecondElement{0};
	std::cout << "Please enter 10 int numbers" << std::endl;
	for (int counter = 0; counter < 10; counter++) {
		std::cin >> _array9[counter];
	}
	for (int counter = 0; counter < 10; counter += 2) {
		changedFirstElement = _array9[counter];
		changedSecondElement = _array9[counter + 1];
		_array9[counter] = changedSecondElement;
		_array9[counter + 1] = changedFirstElement;
	}
	std::cout << "Array with changed elements" << std::endl;
	for (int counter = 0; counter < 10; counter++) {
		std::cout << _array9[counter] << std::endl;
	}

	//10) Дано масив А. Скопіювати елементи масиву А у масив В.
	std::cout << "---------------------------- TASK 10 ------------------------------" << std::endl;
	int _array10A[7] = { -12, 3, -9, 23, 50, 34, -10 };
	int _array10B[7] = { 0, 0, 0, 0, 0, 0, 0 };
	for (int counter = 0; counter < 7; counter++) {
		_array10B[counter] = _array10A[counter];
		std::cout << counter + 1 << " element of array A = " << _array10A[counter]<< "   " << counter + 1 << " element of array B = " << _array10B[counter] << std::endl;
	}

//11) Дано масив А. Утворити реверс масиву А у масиві В
//(тобто перший елемент масиву А записати на місце останнього елемента масиву В, 
//другий елемент масиву А записати на місце передостаннього елемента масиву В і т. д.). 
//Вивести обидва масиви та індекси елементів на екран у вигляді 3-х стовпців.
	std::cout << "---------------------------- TASK 11 ------------------------------" << std::endl;
	int _array11A[7] = { 12, 33, 95, 23, 50, 34, 10 };
	int _array11B[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int counterForArrayB{ 6 };
	for (int counter = 0; counter < 7; counter++) {
		_array11B[counterForArrayB] = _array11A[counter];
		//it does'n work - std::cout << counter + 1 << " element of arrays " << _array11A[counter] << "  "  << _array11B[counter] << std::endl;
		counterForArrayB--;
	}
	std::cout << "1 element of arrays " << _array11A[0] << "  " << _array11B[0] << std::endl;
	std::cout << "2 element of arrays " << _array11A[1] << "  " << _array11B[1] << std::endl;
	std::cout << "3 element of arrays " << _array11A[2] << "  " << _array11B[2] << std::endl;
	std::cout << "4 element of arrays " << _array11A[3] << "  " << _array11B[3] << std::endl;
	std::cout << "5 element of arrays " << _array11A[4] << "  " << _array11B[4] << std::endl;
	std::cout << "6 element of arrays " << _array11A[5] << "  " << _array11B[5] << std::endl;
	std::cout << "7 element of arrays " << _array11A[6] << "  " << _array11B[6] << std::endl;

//12) Дано 2 одновимірних масиви(А і В) по К елементів кожен. 
//Утворити третій масив(С) із К * 2 елементів, переписуючи у нього спочатку всі елементи масиву А по порядку, 
//а потім елементи масиву В.
	std::cout << "---------------------------- TASK 12 ------------------------------" << std::endl;
	const int arraySize12 = 5;
	int _array12A[arraySize12];
	int _array12B[arraySize12];
	int _array12C[arraySize12 * 2];
	std::cout << "Please enter 10 int numbers to fill two arrays" << std::endl;
	for (int counter = 0; counter < 5; counter++) {
		std::cin >> _array12A[counter] >> _array12B[counter];
	}
	for (int counter = 0; counter < 5; counter++) {
		_array12C[counter] = _array12A[counter];
		_array12C[counter + 5] = _array12B[counter];
	}
	for (int counter = 0; counter < 10; counter++) {
		std::cout << counter + 1 << " element of array C = " << _array12C[counter] << std::endl;
	}

//13)Дано масив(А) із К елементів (К- парне число). 
//Утворити 2 масиви(В і С), переписуючи у масив В першу половину масиву А, у масив С – другу половину масиву А.
	std::cout << "---------------------------- TASK 13 ------------------------------" << std::endl;
	const int arraySize13 = 10;
	int _array13A[arraySize13];
	int _array13B[arraySize13 / 2];
	int _array13C[arraySize13 / 2];
	std::cout << "Please enter 10 int numbers to fill array" << std::endl;
	for (int counter = 0; counter < 10; counter++) {
		std::cin >> _array13A[counter];
	}
	for (int counter = 0; counter < 5; counter++) {
		_array13B[counter] = _array13A[counter];
		_array13C[counter] = _array13A[counter + 5];
	}
	for (int counter = 0; counter < 5; counter++) {
		std::cout << counter + 1 << " element of array B = " << _array13B[counter] << ", " << counter + 1 << " element of array C = " << _array13C[counter] << std::endl;
	}

	return 0;
}