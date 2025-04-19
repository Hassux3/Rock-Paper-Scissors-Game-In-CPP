#include <iostream>
#include <ctime>
using namespace std;

string computer_choice, user_choice;


string returnChoice()
{
	srand(time(0));
	int random_Num = rand() % 3;

	if (random_Num == 0)
		computer_choice = "rock";
	else if (random_Num == 1)
		computer_choice = "paper";
	else if (random_Num == 2)
		computer_choice = "scissors";
	else
		computer_choice = "";

	return computer_choice;
}


int main()
{
	cout << "\tRock/Paper/Scissors Game\n\n";

	string options[3] = {"rock","paper","scissors"};
	int total_UserWins, total_computerWins =0;
	int total_ties = 0;

	bool is_ON = true;
	while (is_ON)
		{
			cout << "\nType Rock/Paper/Scissors or Q to quit: ";
			cin >> user_choice;
			computer_choice = returnChoice();

			if (user_choice == "Q" || user_choice == "q")
				{
					is_ON = false;
					break;
				}

			if (user_choice == computer_choice)
				{
					cout << "It's tie" << endl;
					total_ties += 1;
				}

			else if (user_choice == "rock" && computer_choice == "scissors")
				{
					cout << "User wins" << endl;
					total_UserWins += 1;
				}
			else if (user_choice == "paper" && computer_choice == "rock")
				{
					cout << "User wins" << endl;
					total_UserWins += 1;
				}
			else if (user_choice == "scissors" && computer_choice == "paper")
				{
					cout << "User wins" << endl;
					total_UserWins += 1;
				}
			else
				{
					cout << "Computer Wins" << endl;
					total_computerWins += 1;
				}
		}
	cout << "\n\t( Score Board )" << endl
	     << "Total Computer Wins: " << total_computerWins << endl
	     << "Total User Wins: " << total_UserWins << endl
	     << "Total Ties: " << total_ties << endl
	     << "Good Byeee!";

	return 0;
}

