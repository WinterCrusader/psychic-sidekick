//Connor Bivens
//CSC 414
//November 17th, 2020
//Menu Stubbing Project v2.0
#include <iostream>
#include <iomanip>
using namespace std;
void printMenu();
void itemSell(double &cost, int &input);
int main()
{
	//declare and initialize variables
	int input = 0;
	double cost = 0;
	/*int countA = 0;
	int countB = 0;
	int countC = 0;
	int countD = 0;
	int countE = 0;
	int countF = 0;
	int countG = 0;
	int countH = 0;
	int countI = 0;
	int countJ = 0;*/
	while (input != 11)
	{
		itemSell(cost, input);
		/*	printMenu();
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
				cost = cost + 1.10;
				cout << countA << " order(s) of Item A selected." << endl;
			}
			else if (input == 2)
			{
				countB++;
				cost = cost + 2.15;
				cout << countB << " order(s) of Item B selected." << endl;
			}
			else if (input == 3)
			{
				countC++;
				cost = cost + 3.20;
				cout << countC << " order(s) of Item C selected." << endl;
			}
			else if (input == 4)
			{
				countD++;
				cost = cost + 4.25;
				cout << countD << " order(s) of Item D selected." << endl;
			}
			else if (input == 5)
			{
				countE++;
				cost = cost + 5.30;
				cout << countE << " order(s) of Item E selected." << endl;
			}
			else if (input == 6)
			{
				countF++;
				cost = cost + 6.45;
				cout << countF << " order(s) of Item F selected." << endl;
			}
			else if (input == 7)
			{
				countG++;
				cost += 7.60;
				cout << countG << " order(s) of Item G selected." << endl;
			}
			else if (input == 8)
			{
				countH++;
				cost += 8.92;
				cout << countH << " order(s) of Item H selected." << endl;
			}
			else if (input == 9)
			{
				countI++;
				cost += 9.22;
				cout << countI << " order(s) of Item I selected." << endl;
			}
			else if (input == 10)
			{
				countJ++;
				cost += 10.37;
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
		*/
	} 
	cin.get();
	cin.get();
	return 0;
}
void printMenu()
{
	cout << "Here is the menu. Please make an order via entering the number of what you would like. Please enter '11' finish the order and exit." << endl << "1. Item A: $1.10" << endl << "2. Item B: $2.15"
		<< endl << "3. Item C: $3.20" << endl << "4. Item D: $4.25" << endl << "5. Item E: $5.30" << endl << "6. Item F: $6.45"
		<< endl << "7. Item G: $7.60" << endl << "8. Item H: $8.92" << endl << "9. Item I: $9.22" << endl << "10. Item J: $10.37"
		<< endl << "11. Finish Order and Exit" << endl;
}
void itemSell(double &cost, int &input)
{
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	printMenu();
	cin >> input; 
	switch (input)
	{
		
	case 1:
		cout << "How many of item A would you like?" << endl;
		cin >> count[0];
		cost = cost + (1.10 * count[0]);
		cout << count[0] << " order(s) of Item A selected." << endl;
		break;
	case 2:
		cout << "How many of item B would you like?" << endl;
		cin >> count[1];
		cost = cost + (2.15 * count[1]);
		cout << count[1] << " order(s) of Item B selected." << endl;
		break;
	case 3:
		cout << "How many of item C would you like?" << endl;
		cin >> count[2];
		cost = cost + (3.20 * count[2]);
		cout << count[2] << " order(s) of Item C selected." << endl;
		break;
	case 4:
		cout << "How many of item D would you like?" << endl;
		cin >> count[3];
		cost = cost + (4.25 * count[3]);
		cout << count[3] << " order(s) of Item D selected." << endl;
		break;
	case 5:
		cout << "How many of item E would you like?" << endl;
		cin >> count[4];
		cost = cost + (5.30 * count[4]);
		cout << count[4] << " order(s) of Item E selected." << endl;
		break;
	case 6:
		cout << "How many of item F would you like?" << endl;
		cin >> count[5];
		cost = cost + (6.45 * count[5]);
		cout << count[5] << " order(s) of Item F selected." << endl;
		break;
	case 7:
		cout << "How many of item G would you like?" << endl;
		cin >> count[6];
		cost = cost + (7.60 * count[6]);
		cout << count[6] << " order(s) of Item G selected." << endl;
		break;
	case 8:
		cout << "How many of item H would you like?" << endl;
		cin >> count[7];
		cost = cost + (8.92 * count[7]);
		cout << count[7] << " order(s) of Item H selected." << endl;
		break;
	case 9:
		cout << "How many of item I would you like?" << endl;
		cin >> count[8];
		cost = cost + (9.22 * count[8]);
		cout << count[8] << " order(s) of Item I selected." << endl;
		break;
	case 10: 
		cout << "How many of item J would you like?" << endl;
		cin >> count[9];
		cost = cost + (10.37 * count[9]);
		cout << count[9] << " order(s) of Item J selected." << endl;
		break;
	case 11: 
		cout << count[0] << " order(s) of Item A selected." << endl;
		cout << count[1] << " order(s) of Item B selected." << endl;
		cout << count[2] << " order(s) of Item C selected." << endl;
		cout << count[3] << " order(s) of Item D selected." << endl;
		cout << count[4] << " order(s) of Item E selected." << endl;
		cout << count[5] << " order(s) of Item F selected." << endl;
		cout << count[6] << " order(s) of Item G selected." << endl;
		cout << count[7] << " order(s) of Item H selected." << endl;
		cout << count[8] << " order(s) of Item I selected." << endl;
		cout << count[9] << " order(s) of Item J selected." << endl;
		cout << "Order processed and received. The total cost was $" << setprecision(2) << fixed << cost << ". Have a good day!" << endl;
		break;
	default: 
		cout << "Invalid input. Try again please." << endl;
	}