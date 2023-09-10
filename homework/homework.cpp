#include <iostream>

int main()
{
	setlocale(LC_ALL, "ua");
	//1) �������� ��������, ��� ��������� �� �������� � ������� ������ ������ ����������� ����� �������� ֲ��� �����
	// ������������� ������� ������� ��������.
	std::cout << "---------------------------- TASK 1 ------------------------------" << std::endl;

	int numberOne{ 0 }, numberTwo{ 0 }, numberThree{ 0 };
	std::cout << "Enter three numbers" << std::endl;
	std::cin >> numberOne >> numberTwo >> numberThree;

	std::cout << "The first variant: The average of numbers is " << ((double)(numberOne + numberTwo + numberThree) / 3) << std::endl;
	std::cout << "The first variant: The average of numbers is " << ((numberOne + numberTwo + numberThree) / 3.0) << std::endl;

	
	//���� 2-������� �����. ������� ����� ����� ����� ������ �� ������ ���� ���� ����
	//(������������� ��������� % ��� ���������� ��������(�����) �����.
	std::cout << "---------------------------- TASK 2 ------------------------------" << std::endl;
	int twoDigitNumber{ 0 };
	std::cout << "Enter a two-digit number: ";
	std::cin >> twoDigitNumber;
	std::cout << "The first digit = " << twoDigitNumber / 10 % 10 << std::endl;
	std::cout << "The second digit = " << twoDigitNumber % 10 << std::endl;
	std::cout << "The sum of two digits = " << twoDigitNumber / 10 % 10 + twoDigitNumber % 10 << std::endl;

	//3)���� 3 ����� �����. ������� �� ����� true, ���� ����� ����������� �� ���������� 
	// (��������� 1 5 7 ����������� �� ����������, � 1 5 3 - �), ������ ������� - false.
	std::cout << "---------------------------- TASK 3 ------------------------------" << std::endl;
	int theFirstDigit{ 0 };
	int theSecondDigit{ 0 };
	int theThirdDigit{ 0 };
	std::cout << "Enter three int numbers: " << std::endl;
	std::cin >> theFirstDigit >> theSecondDigit >> theThirdDigit;
	if (theFirstDigit < theSecondDigit && theSecondDigit < theThirdDigit)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;


	//4) ���� 3 �����. ������� true, ���� ����� ��� � ������ �� ����.
	std::cout << "---------------------------- TASK 4 ------------------------------" << std::endl;
	int oneDigit{ 0 };
	int twoDigit{ 0 };
	int threeDigit{ 0 };
	std::cout << "Enter three int numbers: " << std::endl;
	std::cin >> oneDigit >> twoDigit >> threeDigit;
	if ((oneDigit % 2 == 0) && (twoDigit % 2 == 0) && (threeDigit
		% 2 == 0) && (oneDigit >= 0) && (twoDigit >= 0) && (threeDigit >= 0))
		std::cout << "TRUE" << std::endl;

	//5) ���� 2 �����. �������� �����. ������� ����������� ������: � ����� ����� �����(�����, ����) �������.
	std::cout << "---------------------------- TASK 5 ------------------------------" << std::endl;
	double digitOne{ 0.0 };
	double digitTwo{ 0.0 };
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> digitOne >> digitTwo;
	if (digitOne == digitTwo)
		std::cout << "Two numbers are same" << std::endl;
	else if (digitOne > digitTwo)
		std::cout << "The first number is greater than the second" << std::endl;
	else
		std::cout << "The second number is greater than the first" << std::endl;

	//6) ���� ���������� �����. ��������� �� ����� �� ������� �����(11, 22 � �.�.)
	std::cout << "---------------------------- TASK 6 ------------------------------" << std::endl;
	int theNumberWithTwoDigit{ 0 };
	std::cout << "Enter a two-digit number: ";
	std::cin >> theNumberWithTwoDigit;
	std::cout << "The first digit = " << theNumberWithTwoDigit / 10 % 10 << std::endl;
	std::cout << "The second digit = " << theNumberWithTwoDigit % 10 << std::endl;
	if ((theNumberWithTwoDigit / 10 % 10) == (theNumberWithTwoDigit % 10))
		std::cout << "Two digits are same" << std::endl;
	else
		std::cout << "Two digits are NOT same" << std::endl;

	//7) ���� ������������ �����. ��������� �� ����� �� ������� ����� � ������� �����(131, 272 � �.�.)
	std::cout << "---------------------------- TASK 7 ------------------------------" << std::endl;
	int threeDigitNumber{ 0 };
	std::cout << "Enter a three-digit number: ";
	std::cin >> threeDigitNumber;
	std::cout << "The first digit = " << threeDigitNumber / 100 % 10 << std::endl;
	std::cout << "The third digit = " << threeDigitNumber % 10 << std::endl;
	if ((threeDigitNumber / 100 % 10) == (threeDigitNumber % 10))
		std::cout << "The first and the third digits are same" << std::endl;
	else
		std::cout << "The first and the third digits are NOT same" << std::endl;

	//8) ���� ������� ������������. ��������� �� ����������� � ���������.
	std::cout << "---------------------------- TASK 8 ------------------------------" << std::endl;
	double sideA{ 0.0 };
	double sideB{ 0.0 };
	std::cout << "Enter side A of the rectangle: ";
	std::cin >> sideA;
	std::cout << "Enter side B of the rectangle: ";
	std::cin >> sideB;
	if (sideA == sideB)
		std::cout << "This rectangle is a square" << std::endl;
	else
		std::cout << "This rectangle is NOT a square" << std::endl;

	//9) ���� ������. ��������� �� ������ � ������.
	std::cout << "---------------------------- TASK 9 ------------------------------" << std::endl;
	char character = 'f';
	std::cout << "Enter some char : ";
	std::cin >> character;
	if ((48 <= (int)character) && ((int)character <= 57))
		std::cout << "The char is digit" << std::endl;
	else
		std::cout << "The char is NOT digit" << std::endl;

	//10) ���� 2 �����. ���� ����� ����� ����� ������� ������� ������ �������� ������. 
	// ������� �������� ������ �� �����.	
	std::cout << "---------------------------- TASK 10 ------------------------------" << std::endl;
	double someDigitFirst{ 0.0 };
	double someDigitSecond{ 0.0 };
	std::cout << "Enter some first digit: ";
	std::cin >> someDigitFirst;
	std::cout << "Enter some second digit: ";
	std::cin >> someDigitSecond;
	if (someDigitFirst > someDigitSecond) {
		double someOneVariable = someDigitFirst;
		double someTwoVariable = someDigitSecond;
		someDigitFirst = someTwoVariable;
		someDigitSecond = someOneVariable;
		std::cout << "The first digit: " << someDigitFirst << std::endl;
		std::cout << "The second digit: " << someDigitSecond << std::endl;
	}
	else
	{
		std::cout << "The first digit: " << someDigitFirst << std::endl;
		std::cout << "The second digit: " << someDigitSecond << std::endl;
	}

	return 0;
}