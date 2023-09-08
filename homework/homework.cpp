#include <iostream>
#include <math.h>

int main()
{
	//1) Ввести 2 цілих числа(змінні типу int). Знайти та вивести суму та добуток чисел.
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;
	int firstVariable{ 0 };
	int secondVariable{ 0 };
	std::cout << "Enter the first number: ";
	std::cin >> firstVariable;
	std::cout << "Enter the second number: ";
	std::cin >> secondVariable;

	std::cout << "The first variable is: " << firstVariable << std::endl;
	std::cout << "The second variable is: " << secondVariable << std::endl;
	std::cout << "Sum Of Variables is: " << (firstVariable + secondVariable) << std::endl;
	std::cout << "Product of variables is: " << (firstVariable * secondVariable) << std::endl;

	//2) Напишіть програму, яка переводить кілометри в метри. Кілометри вводяться з клавіатури.
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl;
	double countOfKilometers{ 0.0 };
	const int numberOfMetersInKilometer{ 1000 };

	std::cout << "Enter count of kilometers which should be convert to meters: ";
	std::cin >> countOfKilometers;
	std::cout << countOfKilometers << "km = " << (countOfKilometers * numberOfMetersInKilometer) << "m" << std::endl;

	//3) Дано ціна 1 хвилини та кількість хвилин. Обчислити вартість дзвінка.
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	double priceOfOneMinute{ 2.34 };
	double countOfSpentMinutes{10.0};

	std::cout << "Price per minute: " << priceOfOneMinute << "$" <<std::endl;
	std::cout << "For " << countOfSpentMinutes << " min of talk, you will spend " << (priceOfOneMinute * countOfSpentMinutes) << "$" << std::endl;

	//4)Ви купили в магазині 4 різні товари. Дані ціни кожного товару (константні значення) та кількість товару, який був придбаний. 
	// Обрахувати та вивести вартість покупки. Забазпечити вивід у вигляді чеку.
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	const double priceOfApple{ 1.22 };
	const double priceOfMeat{ 2.67 };
	const double priceOfPotato{ 0.13 };
	const double priceOfBread{ 0.74 };
	double countOfApple{ 5.94 };
	double countOfMeat{ 3.78 };
	double countOfPotato{ 4.12 };
	double countOfBread{ 2.0 };
	double totalForApple = priceOfApple * countOfApple;
	double totalForMeat = priceOfMeat * countOfMeat;
	double totalForPotato = priceOfPotato * countOfPotato;
	double totalForBread = priceOfBread * countOfBread;

	std::cout << "__________________________________CHECK________________________________" << std::endl;
	std::cout << "Name Of Good   " << "Amount      " << "Price per unit      " << "Total price per position      " << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;
	std::cout << "Apple          " << countOfApple << " kg     " << priceOfApple << "$               " << totalForApple << "$" << std::endl;
	std::cout << "Meat           " << countOfMeat << " kg     " << priceOfMeat << "$               " << totalForMeat << "$" << std::endl;
	std::cout << "Potato         " << countOfPotato << " kg     " << priceOfPotato << "$               " << totalForPotato << "$" << std::endl;
	std::cout << "Bread          " << countOfBread << "    loafs  " << priceOfBread << "$               " << totalForBread << "$" << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;
	std::cout << "Total:                                         " << (totalForApple + totalForBread + totalForMeat + totalForPotato) << "$" << std::endl;

	//5) Розробити програму, яка організовує діалог з користувачем і дозволяє обчислити по вказаній сумі і курсу 
	// євро, долара та злотого в суму в гривнях. 
	// Примітка! З використанням констант.
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	const double dollarExchangeRate{ 36.67 };
	const double euroExchangeRate{ 40.32 };
	const double zlotyiExchangeRate{ 7.54 };
	double countOfDollarsInClient{ 0.0 };
	double countOfEurosInClient{ 0.0 };
	double countOfZlotyisInClient{ 0.0 };

	std::cout << "Hello, I am currency convertor, I can convert Dollar, Euro and Zlotyi to Hryvnia" << std::endl;
	std::cout << "How many dollars do you have? : ";
	std::cin >> countOfDollarsInClient;
	std::cout << "How many euros do you have? : ";
	std::cin >> countOfEurosInClient;
	std::cout << "How many zlotyis do you have? : ";
	std::cin >> countOfZlotyisInClient;
	std::cout << "For " << countOfDollarsInClient << " dollars you will receive " << (countOfDollarsInClient * dollarExchangeRate) << " hryvnias" << std::endl;
	std::cout << "For " << countOfEurosInClient << " euros you will receive " << (countOfEurosInClient * euroExchangeRate) << " hryvnias" << std::endl;
	std::cout << "For " << countOfZlotyisInClient << " zlotyis you will receive " << (countOfZlotyisInClient * zlotyiExchangeRate) << " hryvnias" << std::endl;
	std::cout << "Total you will receive " << ((countOfDollarsInClient * dollarExchangeRate) + (countOfZlotyisInClient * zlotyiExchangeRate) + (countOfEurosInClient * euroExchangeRate)) << " hryvnias" << std::endl;

	//6) Написати програму, яка переводить повний оберт планети Марс навколо Сонця в земні роки. Оберти ввести з клавіатури. 
	//(Марс робить повний оберт навколо Сонця за 686 земних днів)
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	double numberOfEarthDaysInOneRevolutionOfMars{ 686.0 };
	double numberOfEarthDaysInOneRevolutionOfEarth{ 365.0 };
	double numberOfEarthYearsInOneRevolutionOfMars = numberOfEarthDaysInOneRevolutionOfMars / numberOfEarthDaysInOneRevolutionOfEarth;
	double numberOfRevolutionOfMarsFromUser{ 0.0 };
	std::cout << "Enter the number of revolutions of Mars around the Sun to find out how many Earth years it will take: ";
	std::cin >> numberOfRevolutionOfMarsFromUser;
	std::cout<< "For " << numberOfRevolutionOfMarsFromUser << " revolutions of Mars around the Sun, it will take " << (numberOfRevolutionOfMarsFromUser * numberOfEarthYearsInOneRevolutionOfMars) << " Earth years" << std::endl;
	
	//7)Напишіть програму, яка обраховує квадрат та куб довільного введеного числа
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	double arbitrarilyEnteredNumber{ 0.0 };
	std::cout << "Enter arbitrarily entered number to find out the square of this number and the cube of this number: ";
	std::cin >> arbitrarilyEnteredNumber;
	std::cout << "The square of this number is: " << pow(arbitrarilyEnteredNumber, 2) <<std::endl;
	std::cout << "The cube of this number is: " << pow(arbitrarilyEnteredNumber, 3) <<std::endl;

	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	double fuelConsumptionPer100Km{ 11.2 };
	double priceOf1LiterOfFuel{ 42.5 };
	double distance{ 129 };
	double fuelConsumptionPerOneKm = fuelConsumptionPer100Km / 100;
	std::cout << "Fuel consumption per 100km = " << fuelConsumptionPer100Km <<" liters" << std::endl;
	std::cout << "Price of one liter of fuel = " << priceOf1LiterOfFuel << " $" << std::endl;
	std::cout << "The distance the driver needs to travel = " << distance << " km" << std::endl;
	std::cout << "The driver needs to spend " << (fuelConsumptionPerOneKm * distance * priceOf1LiterOfFuel) << " $ on fuel to travel a distance of " << distance << " km" << std::endl;

	return 0;
}