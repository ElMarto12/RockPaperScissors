#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void GameMenu();
void GamePlay();


int main() {
	
	GameMenu();

}

void GameMenu() {
	int select;
	
	do {

		cout << "############################" << endl;
		cout << "##                        ##" << endl;
		cout << "##  Rock Paper Scissors   ##" << endl;
		cout << "##                        ##" << endl;
		cout << "############################" << endl;
		cout << "" << endl;
		cout << "############################" << endl;
		cout << "## ---------------------- ##" << endl;
		cout << "## | 1. Start Game      | ##" << endl;
		cout << "## ---------------------- ##" << endl;
		cout << "## | 0. Exit            | ##" << endl;
		cout << "## ---------------------- ##" << endl;
		cout << "############################" << endl;

		cin >> select;
		cin.ignore();
		switch (select)
		{
		case 1:
			system("cls");
			GamePlay();
			break;
		case 0:
			break;
		default:
			break;
		}
		
	} while (select != 0);
}

void GamePlay() {

	srand(time(0));
	
	const string select[3] = { "Paper", "Rock", "Scissors" };


	int input;

	do {

		string selection = select[rand() % 3];



		cout << "##############################################################" << endl;
		cout << "##                    ##                ##                  ##" << endl;
		cout << "##     0. Paper       ##    1.Rock      ##    2.Scissors    ##" << endl;
		cout << "##                    ##                ##                  ##" << endl;
		cout << "##############################################################" << endl;
		cout << "" << endl;
		cout << "/// Select ///" << endl;
		cout << "___ 3. Exit ___" << endl;
		
		cin >> input;

		switch (input)
		{
		case 0:

			system("cls");
			cout << "Your selection is :" << select[input] << endl;
			cout << "Computer selection is :" << selection << endl;
			if (select[input] == select[0] && selection == "Scissors") {
				cout << "You lost!!! " << endl;
			}
				else if (select[input] == select[0] && selection == "Rock") {
					cout << "You lost!!! " << endl;
			}
					else if (select[input] == select[0] && selection == "Paper") {
						cout << "Well, it's a Draw " << endl;
			}
			break;
		case 1:
			system("cls");
			cout << "Your selection is :" << select[input] << endl;
			cout << "Computer selection is :" << selection << endl;
			if (select[input] == select[1] && selection == "Scissors") {
				cout << "You Won !!!" << endl;
			}
					else if (select[input] == select[1] && selection == "Rock") {
						cout << "Well, it's Draw " << endl;
			}
						else if (select[input] == select[1] && selection == "Paper") {
							cout << "You Won !!!" << endl;
			}
			break;
		case 2:
			system("cls");
			cout << "Your selection is :" << select[input] << endl;
			cout << "Computer selection is :" << selection << endl;
			if (select[input] == select[2] && selection == "Scissors") {
				cout << "Well, it's Draw " << endl;
			}
				else if (select[input] == select[2] && selection == "Rock") {
					cout << "You lost !!!" << endl;
			}
					else if (select[input] == select[2] && selection == "Paper") {
						cout << "You Won !!!" << endl;
			}
			break;
		case 3:
			system("cls");
			break;

		default:
			break;
		}
	} while (input != 3);
}
