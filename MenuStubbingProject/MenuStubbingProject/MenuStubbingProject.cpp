//Connor Bivens
//CSC 414
//November 17th, 2020
//Menu Stubbing Project
#include <iostream>
using namespace std;
int main()
{
	int input = 0;
	int countA = 0;
	int countB = 0;
	int countC = 0;
	int countD = 0;
	int countE = 0;
	int countF = 0;
	int countG = 0;
	int countH = 0;
	int countI = 0;
	int countJ = 0;
	while (input != -1)
	{
		cout << "Here is the menu. Please make an order via entering the number of what you would like. Please enter '11' finish the order and exit." << endl << "1. Item A" << endl << "2. Item B"
			<< endl << "3. Item C" << endl << "4. Item D" << endl << "5. Item E" << endl << "6. Item F"
			<< endl << "7. Item G" << endl << "8. Item H" << endl << "9. Item I" << endl << "10. Item J"
			<< endl << "11. Finish Order and Exit" << endl;
		cin >> input;
		if (!cin)
		{
			cin.clear();
			cin.ignore();
			cout << "Invalid input. Please try again." << endl;
		}
		else if (input == 1)
		{
			countA++;
			cout << countA << " order(s) of Item A selected." << endl;
		}
		else if (input == 2)
		{
			countB++;
			cout << countB << " order(s) of Item B selected." << endl;
		}
		else if (input == 3)
		{
			countC++;
			cout << countC << " order(s) of Item C selected." << endl;
		}
		else if (input == 4)
		{
			countD++;
			cout << countD << " order(s) of Item D selected." << endl;
		}
		else if (input == 5)
		{
			countE++;
			cout << countE << " order(s) of Item E selected." << endl;
		}
		else if (input == 6)
		{
			countF++;
			cout << countF << " order(s) of Item F selected." << endl;
		}
		else if (input == 7)
		{
			countG++;
			cout << countG << " order(s) of Item G selected." << endl;
		}
		else if (input == 8)
		{
			countH++;
			cout << countH << " order(s) of Item H selected." << endl;
		}
		else if (input == 9)
		{
			countI++;
			cout << countI << " order(s) of Item I selected." << endl;
		}
		else if (input == 10)
		{
			countJ++;
			cout << countJ << " order(s) of Item J selected." << endl;
		}
		else if (input == 11)
		{
			cout << countA << " order(s) of Item A selected." << endl;
			cout << countB << " order(s) of Item B selected." << endl;
			cout << countC << " order(s) of Item C selected." << endl;
			cout << countD << " order(s) of Item D selected." << endl;
			cout << countE << " order(s) of Item E selected." << endl;
			cout << countF << " order(s) of Item F selected." << endl;
			cout << countG << " order(s) of Item G selected." << endl;
			cout << countH << " order(s) of Item H selected." << endl;
			cout << countI << " order(s) of Item I selected." << endl;
			cout << countJ << " order(s) of Item J selected." << endl;
			cout << "Order processed and received. Have a good day!" << endl;
			break;
		}
		else
			cout << "Invalid input. Please try again." << endl;
	}
	cin.get();
	cin.get();
	return 0;
}