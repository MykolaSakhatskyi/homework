#pragma once
int numberOfDaysInMonth(int serialNumberOfMonth)
{
	switch (serialNumberOfMonth)
	{
	case 1:
		return 31;
		break;
	case 2:
		return 28;
		break;
	case 3:
		return 31;
		break;
	case 4:
		return 30;
		break;
	case 5:
		return 31;
		break;
	case 6:
		return 30;
		break;
	case 7:
		return 31;
		break;
	case 8:
		return 31;
		break;
	case 9:
		return 30;
		break;
	case 10:
		return 31;
		break;
	case 11:
		return 30;
		break;
	case 12:
		return 31;
		break;
	default:
		return 0;
		break;
	}
}
void nameOfMonth(int serialNumberOfMonth)
{
	switch (serialNumberOfMonth)
	{
	case 1:
		std::cout << "January";
		break;
	case 2:
		std::cout << "February";
		break;
	case 3:
		std::cout << "March";
		break;
	case 4:
		std::cout << "April";
		break;
	case 5:
		std::cout << "May";
		break;
	case 6:
		std::cout << "June";
		break;
	case 7:
		std::cout << "July";
		break;
	case 8:
		std::cout << "August";
		break;
	case 9:
		std::cout << "September";
		break;
	case 10:
		std::cout << "October";
		break;
	case 11:
		std::cout << "November";
		break;
	case 12:
		std::cout << "December";
		break;
	default:
		std::cout << "Incorrect nubmer of month";
		break;
	}
}