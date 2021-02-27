//session 7
//12/11/2020
//cs113

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


//Global variables that make it easie to deal with some arrays
char tic[5][5] = { {'1','|' ,'2', '|' ,'3'},
				{'_','_','_','_','_' },
				{'4', '|' ,'5', '|' ,'6'},
				{'_','_','_','_','_'},
				{'7', '|' ,'8', '|' ,'9'} };
                //Tic Tax Toe functions start here
//Resetting the board for if the player wants to play again
void resetBoard() {
	tic[0][0] = '1';
	tic[0][2] = '2';
	tic[0][4] = '3';
	tic[2][0] = '4';
	tic[2][2] = '5';
	tic[2][4] = '6';
	tic[4][0] = '7';
	tic[4][2] = '8';
	tic[4][4] = '9';
}

//This function checks if the spot the player wants is taken if the spot is not taken it swaps to the correct X or O
bool move(int place, char player) {
	switch (place) {
	case 1:
		if (tic[0][0] != 'X' && tic[0][0] != 'O') {
			tic[0][0] = player;

			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;

		}
	case 2:
		if (tic[0][2] != 'X' && tic[0][2] != 'O') {
			tic[0][2] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 3:
		if (tic[0][4] != 'X' && tic[0][4] != 'O') {
			tic[0][4] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 4:
		if (tic[2][0] != 'X' && tic[2][0] != 'O') {
			tic[2][0] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 5:
		if (tic[2][2] != 'X' && tic[2][2] != 'O') {
			tic[2][2] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 6:
		if (tic[2][4] != 'X' && tic[2][4] != 'O') {
			tic[2][4] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 7:
		if (tic[4][0] != 'X' && tic[4][0] != 'O') {
			tic[4][0] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 8:
		if (tic[4][2] != 'X' && tic[4][2] != 'O') {
			tic[4][2] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	case 9:
		if (tic[4][4] != 'X' && tic[4][4] != 'O') {
			tic[4][4] = player;
			return true;
		}
		else {
			cout << "That spot is taken." << endl;
			return false;
		}
	}

}

//This swaps the character the reason its a function is because it is used enough times and makes it easier to assign X to who ever is going first
char swap(char player) {
	if (player == 'X') {
		return 'O';
	}
	else {
		return 'X';
	}
}

//This funtion checks if the game is over and displays the correct winner
bool check(char player) {
	if (tic[0][0] == tic[0][2] && tic[0][0] == tic[0][4]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[2][0] == tic[2][2] && tic[2][0] == tic[2][4]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	 else if (tic[4][0] == tic[4][2] && tic[4][0] == tic[4][4]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][0] == tic[2][0] && tic[0][0] == tic[4][0]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][2] == tic[2][2] && tic[0][2] == tic[4][2]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][4] == tic[2][4] && tic[0][4] == tic[4][4]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][0] == tic[2][2] && tic[0][0] == tic[4][4]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][4] == tic[2][2] && tic[0][4] == tic[4][0]) {
		player = swap(player);
		cout << "The game is over " << player << " wins" << endl;
		return true;
	}
	else if (tic[0][0] != '1' && tic[0][2] != '2' && tic[0][4] != '3' && tic[2][0] != '4' &&
		tic[2][2] != '5' && tic[2][4] != '6' && tic[4][0] != '7' && tic[4][2] != '8' && tic[4][4] != '9') {
		cout << "The game hase ended in a tie" << endl;
		return true;
	}
	else {
		return false;
	}
}

//This funtion prints the board and is used enough to make it a funtion and helps clean up the actual code
void board() {
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << tic[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

//This function runs all the essential commands for the game
void runGame(char FS) {
	int place;
	char player = 'X';
	bool over = false;
	while (over != true) { // will end the funtion when the game has ended based on the funtion "check"

		over = check(player);
		while (FS == 'F' && over == false) {

			board();

			bool finishedTurn = false; // sets the bool to false

			while (finishedTurn == false) { // this makes sure the players turn isnt skipped if the move they chose isnt a valid one

				cout << "Where do you want to place your " << player << "?" << endl;
				cin >> place;

				if (place >= 1 && place <= 9) {
					finishedTurn = move(place, player);// makes the correct move

				}
				else {
					cout << "Pick a valid spot." << endl;
				}

			}
			player = swap(player); // swaps X and O

				FS = 'S';

		}

		board(); // prints the board
		over = check(player);

		while (FS == 'S' && over == false) {// Checks to see if it is the computers turn and if the game is over or not in the case that the player one
			//computer turn
			bool finishedTurn = false;
			while (finishedTurn == false) {
				place = (rand() % 9) + 1; //picks a random number for the computer
				cout << "The computer chose " << place << endl;
				if (place >= 1 && place <= 9) {

					finishedTurn = move(place, player);
				}
				else {
					cout << "Pick a valid spot." << endl;
				}
			}

			player = swap(player);
			FS = 'F';
		}	
	}
}//Tic Tac Toe functions end here

int main() {

	int program;
	char quit;
	srand(time(0));

    do {
			resetBoard();
			char FS;
			char XO;

			
			
			cout << "This is Tic-tac-toe, Do you want to go first or second?[F/S]" << endl;
			cin >> FS;

			runGame(FS);


			cout << "Do you want to run the program again? (y/n)" << endl;
			cin >> quit;

		} while (quit != 'n'); //Quitting the program if wanted
}