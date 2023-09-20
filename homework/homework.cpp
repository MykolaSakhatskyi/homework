#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	
	//1. ���������� ������� �����������. �������� �������� ����������� ��� ���� ��������
	//(���������, 35- 36.0 � �������� �����������, ���� ����������� ��������,36.1 � 36.8 � ��������� �����������, 
	// ������ ������� � �.�.).
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;
	
	double bodyTemperature{ 0.0 };
	std::cout << "Enter your body temperature: ";
	std::cin >> bodyTemperature;
	if (38.1 <= bodyTemperature)
		std::cout << "Very high body temperature, the body is weak" << std::endl;
	else if (37.0 <= bodyTemperature && bodyTemperature <= 38.0)
		std::cout << "Increased body temperature, the organism is weakened" << std::endl;
	else if (36.0 <= bodyTemperature && bodyTemperature <= 36.9)
		std::cout << "Normal body temperature, the organism is healthy" << std::endl;
	else if (35.0 <= bodyTemperature && bodyTemperature <= 35.9)
		std::cout << "Lowered temperature, weakening of the body" << std::endl;
	else if (bodyTemperature <= 34.9)
		std::cout << "Hypothermia, critical state of body temperature" << std::endl;

	//2.���� ���(������, �������, �������). ��������� �� ��� ����������( �-� 25.61.60 � ������������).
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl;
	int userHours{ 0 };
	int userMinutes{ 0 };
	int userSeconds{ 0 };
	std::cout << "What hours is it now?: ";
	std::cin >> userHours;
	std::cout << "What minutes is it now?: ";
	std::cin >> userMinutes;
	std::cout << "What seconds is it now?: ";
	std::cin >> userSeconds;
	if ((0 > userHours || userHours > 23) || (0 > userMinutes || userMinutes > 59) || (0 > userSeconds || userSeconds > 59))
		std::cout << "This time " << userHours << "." << userMinutes << "." << userSeconds << " has incorrect format" << std::endl;
	else
		std::cout << "This time " << userHours << "." << userMinutes << "." << userSeconds << " has correct format" << std::endl;

	//3. ���� ��(����� ����). ��������� �� �� ����������. 
	//г� ����������, ���� ����� ���� ���� ������� ������ �� 4 � �� ������� �� 100
	//(��������� ����������� � 1996, 1992 ����). 
	//����� ����, ����� ���� �� �� ������ � ����� ���(����� �� ������� �� 100), 
	//����������� � � �� ������� �� 400(�-�, 1600, 1200 � ��������, � 1700, 1900 - �).
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	int userYear{ 0 };
	std::cout << "Enter a year to find out if it is a leap year or not: ";
	std::cin >> userYear;
	if (userYear % 4 == 0) {
		if (userYear % 100 == 0) {
			if (userYear % 400 == 0)
				std::cout << "Year " << userYear << " is leap year" << std::endl;
			else
				std::cout << "Year " << userYear << " is not leap year" << std::endl;
		}
		else
			std::cout << "Year " << userYear << " is leap year" << std::endl;
	}
	else
		std::cout << "Year " << userYear << " is not leap year" << std::endl;

	//4. ��������� �� � ����� ������. ��������� �� ������ ��������� ���(���� � ���� 55, ������� � ���� 60).
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	int age{ 0 };
	char gender{ 'a' };
	std::cout << "Enter age: ";
	std::cin >> age;
	std::cout << "Choose gender(if male enter 'm', if female enter 'f'): ";
	std::cin >> gender;
	if ((gender == 'f' && age >= 55) || (gender == 'm' && age >= 60))
		std::cout << "This is a person of retirement age" << std::endl;
	else
		std::cout << "This is NOT a person of retirement age" << std::endl;

	//5. ������� �� ����� ��� ����� �� 1 �� 100. - while
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	int number = 1;
	while (number != 101) {
		std::cout << number << std::endl;
		number++;
	}

	//6.��������� 10 �����. ������ ���� �� ������ ����������� ��� �����. - while
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	double sumOfNumbers{ 0.0 };
	int counter{ 0 };
	std::cout << "Enter 10 numbers:" << std::endl;
	while (counter < 10) {
		double someNumber{ 0.0 };
		std::cin >> someNumber;
		sumOfNumbers += someNumber;
		//std::cout << sumOfNumbers << std::endl;
		counter++;
	}
	std::cout << "Sum of numbers = " << sumOfNumbers << std::endl;
	std::cout << "Arithmetic average of numbers = " << sumOfNumbers / 10.0 << std::endl;

	//7. ������� �������� ���������� ���� �������� ������ n-�������� �����. 
	//������� �� �����, ��� ���� �������� � ��� ������ ����� � �� ��������. - do..while
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	int userIntegerNumber{ 0 };
	char symbolToExit('a');
	int sumOfSquares{ 0 };
	int counterFirstNonEvenNumbers{ 0 };
	std::cout << "Enter integer number: ";
	do {	
		std::cin >> userIntegerNumber;
		if (userIntegerNumber % 2 != 0) {
			std::cout << "The number " << userIntegerNumber << " is not even" << std::endl;
			std::cout << "Its square is " << pow(userIntegerNumber, 2) << std::endl;
			if (counterFirstNonEvenNumbers < 3) {
				std::cout << "The sum of squares the first non even numbers is " << (sumOfSquares += pow(userIntegerNumber, 2)) << std::endl;
				counterFirstNonEvenNumbers++;
			}
		}
		else
			std::cout << "The number "<< userIntegerNumber << " is even" << std::endl;
		std::cout << "If you want to exit - press x: ";
		std::cin >> symbolToExit;
		if (symbolToExit == 'x')
			break;
		else
			std::cout << "Enter integer number: ";
	} while (true);

	//8.�������� �������� ��� �������� ���� ���� �����, �� ��������� � ���������. - do..while 
	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	double sumOfUserNumbers{ 0.0 };
	int counterOfNumbers{ 0 };
	std::cout << "Enter 7 numbers" << std::endl;
	do {
		
		double someNumber{ 0.0 };
		std::cin >> someNumber;
		sumOfUserNumbers += someNumber;
		counterOfNumbers++;
	} while (counterOfNumbers < 7);
	std::cout <<"Sum of numbers = " << sumOfUserNumbers << std::endl;

	
	//9.�������� ��������, ��� ���������� ������� ������������ ������� � ���������� 
	//� ���� ������� ������� �� ������� ����������� (�����, ���������, �������). 
	//�������! ������ ������ ����������� ����� ������� ����
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	double userNumberOf�entimeters{ 0.0 };
	std::cout << "Enter the number of centimeters to convert: ";
	std::cin >> userNumberOf�entimeters;
	char userConvertUnit{ 'a' };
	std::cout << "Choose the unit you want to convert centimeters to" << std::endl;
	std::cout << "To convert to meters, enter 'm'"<<std::endl;
	std::cout << "To convert to millimeters, enter 'l'" << std::endl;
	std::cout << "To convert to decimeters, enter 'd'" << std::endl;
	std::cin >> userConvertUnit;
	switch (userConvertUnit) {
	case 'm':
			std::cout << userNumberOf�entimeters<< "cm = " << userNumberOf�entimeters / 100.0 << "m" << std::endl;
			break;
	case 'l':
		std::cout << userNumberOf�entimeters << "cm = " << userNumberOf�entimeters * 10.0 << "mm" << std::endl;
		break;
	case 'd':
		std::cout << userNumberOf�entimeters << "cm = " << userNumberOf�entimeters / 10.0 << "dm" << std::endl;
		break;
	default:
		std::cout << "You entered incorrect unit" << std::endl;
	}

	//10.�������� �����������. 
	// �������� ���� �� ���� ����������� �������� �������� � ���������� ���� (�������� � �����������, ������� ����). 
	// � ������� ����������� ��������� ������� (������ �� ���� ,������������ ��������, ����� ������ �����). 
	// ������� �� ������� ���� � �������� �� �������!!!
	std::cout << "---------------------------- TASK 10 ------------------------------" << std::endl;
	char userOperator{'a'};
	double numberOne{ 0.0 };

	std::string userInputNumberOne;
	std::cout << "Enter the first number:" << std::endl;

	do {
		std::getline(std::cin, userInputNumberOne);
		std::istringstream iss(userInputNumberOne);

		if (iss >> numberOne)
			break;
		std::cout << "Invalid input. Please enter a number." << std::endl;
	} while (true);

	std::cout << "Choose the operator from the list( * , / , + , - ): " << std::endl;
	do{
		std::cin >> userOperator;
		if (userOperator == '*')
			break;
		if (userOperator == '-')
			break;
		if (userOperator == '+')
			break;
		if (userOperator == '/')
			break;
		std::cout << "I don't know this operator, choose frome the list ( * , / , + , - )" << std::endl;
	} while (userOperator != '*' || userOperator != '/' || userOperator != '+' || userOperator != '-');

	double numberTwo{ 0.0 };
	std::string userInputNumberTwo;
	std::cout << "Enter the second number:" << std::endl;

	do {
		std::getline(std::cin, userInputNumberTwo);
		std::istringstream iss(userInputNumberTwo);

		if (iss >> numberTwo)
			break;
		std::cout << "Invalid input. Please enter a number." << std::endl;
	} while (true);

	do {
		if (userOperator != '/' || numberTwo != 0)
			break;
		std::cout << "You cannot divide by zero, enter another number" << std::endl;
		std::cin >> numberTwo;
	} while (true);
	switch (userOperator) {
		case '*':
			std::cout << "result: " << (numberOne * numberTwo) << std::endl;
			break;
		case '/':
			std::cout << "result: " << (numberOne / numberTwo) << std::endl;
			break;
		case '+':
			std::cout << "result: " << (numberOne + numberTwo) << std::endl;
			break;
		case '-':
			std::cout << "result: " << (numberOne - numberTwo) << std::endl;
			break;
		}
	
	return 0;
}