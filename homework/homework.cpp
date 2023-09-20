#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	
	//1. Користувач вводить температуру. Програма виводить повідомлення про стан організму
	//(наприклад, 35- 36.0 – понижена температура, стан ослабленого організму,36.1 – 36.8 – нормальна температура, 
	// людина здорова і т.і.).
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

	//2.Дано час(години, хвилини, секунди). Визначити чи час допустимий( н-д 25.61.60 – недопустимий).
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

	//3. Дано рік(номер року). Визначити чи рік високосний. 
	//Рік високосний, якщо число року року ділиться націло на 4 і не ділиться на 100
	//(наприклад високосними є 1996, 1992 роки). 
	//Серед років, число яких має дві останн і цифри нулі(тобто рік ділиться на 100), 
	//високосними є ті що діляться на 400(н-д, 1600, 1200 – високосні, а 1700, 1900 - ні).
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

	//4. Вводиться вік і стать людини. Визначити чи людина пенсійного віку(жінки – після 55, чоловіки – після 60).
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

	//5. Вивести на екран цілі числа від 1 до 100. - while
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	int number = 1;
	while (number != 101) {
		std::cout << number << std::endl;
		number++;
	}

	//6.Вводяться 10 чисел. Знайти суму та середнє арифметичне цих чисел. - while
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

	//7. Скласти програму обчислення суми квадратів перших n-непарних чисел. 
	//Вивести на екран, крім суми квадратів і самі непарні числа і їх квадрати. - do..while
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

	//8.Написати програму яка обчислює суму семи чисел, які вводяться з клавіатури. - do..while 
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

	
	//9.Написати програму, яка переводить введену користувачем довжину в сантиметри 
	//у інші одиниці довжини за вибором користувача (метри, дециметри, міліметри). 
	//Примітка! Роботу задачі організувати через систему меню
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	double userNumberOfСentimeters{ 0.0 };
	std::cout << "Enter the number of centimeters to convert: ";
	std::cin >> userNumberOfСentimeters;
	char userConvertUnit{ 'a' };
	std::cout << "Choose the unit you want to convert centimeters to" << std::endl;
	std::cout << "To convert to meters, enter 'm'"<<std::endl;
	std::cout << "To convert to millimeters, enter 'l'" << std::endl;
	std::cout << "To convert to decimeters, enter 'd'" << std::endl;
	std::cin >> userConvertUnit;
	switch (userConvertUnit) {
	case 'm':
			std::cout << userNumberOfСentimeters<< "cm = " << userNumberOfСentimeters / 100.0 << "m" << std::endl;
			break;
	case 'l':
		std::cout << userNumberOfСentimeters << "cm = " << userNumberOfСentimeters * 10.0 << "mm" << std::endl;
		break;
	case 'd':
		std::cout << userNumberOfСentimeters << "cm = " << userNumberOfСentimeters / 10.0 << "dm" << std::endl;
		break;
	default:
		std::cout << "You entered incorrect unit" << std::endl;
	}

	//10.Написати калькулятор. 
	// Введення цифр та вибір математичної операції виконати в діалоговому стилі (запитати у користувача, вивести меню). 
	// У програмі передбачити уникнення помилок (ділення на нуль ,недопустимий оператор, буква замість цифор). 
	// Фантазія та «дизайн» меню – ціниться та вітається!!!
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