#include<iostream>

using namespace std;


void display();
void toss();
void display_rule();
void credit();

int i, j;
char game[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char turn = 'X';
bool draw = false;



void menu() {

	int chioce;

	cout << "1.PLAY GAME" << endl;

	cout << "2.RULE" << endl;

	cout << "3.Credit" << endl;

	cin >> chioce;

		switch (chioce)
		{
		case 1: {

			toss();
			
			break;

		}
		case 2: {
			system("cls");
			display_rule();
			break;
		}
		case 3: {
			credit();
		}

		default:
			break;
		}

}

void display() {


	system("cls");

	cout << "\t\t      |     |" << endl;
	cout << "\t\t      |     |" << endl;
	cout << "\t\t" << game[0][0] << "     |" << "\t" << game[0][1] << "   |" << "\t" << game[0][2] << endl;
	cout << "\t\t------|-----|-------" << endl;
	cout << "\t\t      |     |" << endl;
	cout << "\t\t" << game[1][0] << "     |" << "\t" << game[1][1] << "   |" << "\t" << game[1][2] << endl;
	cout << "\t\t      |     |" << endl;
	cout << "\t\t------|-----|------" << endl;
	cout << "\t\t      |     |" << endl;
	cout << "\t\t" << game[2][0] << "     |" << "\t" << game[2][1] << "   |" << "\t" << game[2][2] << endl;
	cout << "\t\t      |     |" << endl;


}

void toss() {
	char player;
	bool head = true, tail = false;
	int pridict;

	cout << "TOSSING FIRST PLAYER 1 HAS TO PRIDICT" << endl;
	cout << "CHOSSE 1 FOR TRUE AND 0 FOR FALSE::";
	cin >> pridict;
	cout << endl;
	if (pridict == 1)
	{
		cout << "Its player 1 turn [X]" << endl;
		player = 'X';
		
	}
	else
	{
		cout << "Its player 2 turn [O]" << endl;
		player = 'O';

	}
	system("pause");

}


void playgame() {

	int select;

	if (turn=='X')
	{
		cout<< endl;
		cout << "PLAYER 1[X] TURN:" ;

	}
	if (turn == 'O')
	{
		cout << endl;
		cout << "PLAYER 2[O] TURN:";

	}

	cin >> select;
	switch (select)
	{
		case 1: {
			i = 0, j = 0;
			break;

		}
		case 2: {
			i = 0, j = 1;
			break;

		}case 3: {
			i = 0, j = 2;
			break;

		}case 4: {
			i = 1, j = 0;
			break;

		}case 5: {
			i = 1, j = 1;
			break;

		}case 6: {
			i = 1, j = 2;
			break;

		}case 7: {
			i = 2, j = 0;
			break;

		}case 8: {
			i = 2, j = 1;
			break;

		}
		case 9: {
			i = 2, j = 2;
			break;

		}
	
			default:
			{
				cout << "THE INPUT IS OUT OF RANGE " << endl;
				break;
			}
	}

	if (turn=='X' && game[i][j]!='X' && game[i][j] != 'O')
	{
		game[i][j] = 'X';
		turn = 'O';
	}
	else if (turn == 'O' && game[i][j] != 'X' && game[i][j] != 'O')
	{
		game[i][j] = 'O';
		turn = 'X';
	}
	else
	{
		cout << "BOX IS ALREADY IS FILLED" << endl;
		cout << "TRY AGAIN" << endl;
		playgame();
	}

	
}

bool gameover() {
	for (int i = 0; i < 3; i++)
	{
		if (game[i][0]==game[i][1]&& game[i][0] == game[i][2]|| game[0][i] == game[1][i] && game[0][i] == game[2][i])
		{
			return false;
		}

	}

	if (game[0][0]==game[1][1]&& game[0][0] == game[2][2] || game[0][2] == game[1][1] && game[0][2] == game[2][0])
	{
		return false;
	}

	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j]!='X' && game[i][j]!='O')
			{
				return true;

			}
		}
	}

	draw = true;
	return false;
}



void display_rule() {
	cout << endl << endl;

	cout << "\t\t1:- Select Your Shape" << endl;
	cout << "\t\t2:- Mark Your shape on any circle you want " << endl;
	cout << "\t\t3:- Wait for Other player turn" << endl;
	cout << "\t\t4:- The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl;
	cout << "\t\t5:- When all 9 squares are full, the game is over." << endl;
	system("pause");
}


void credit() {

	cout << "\t\tHistory. Games played on three-in-a-row boards can be traced back to ancient Egypt," << endl;
	cout << "\t\twhere such game boards have been found on roofing tiles dating from around 1300 BC." << endl;
	cout << "\t\tAn early variation of tic-tac-toe was played in the Roman Empire, around the first century BC." << endl;
}





int main() {

	cout << "\t\t  Tic Tac Toe" << endl << endl;
	cout << endl;
	
	menu();

	while (gameover())
	{
		display();
		playgame();
		display();
		gameover();
	}

	if (turn=='X'&& draw==false)
	{
		cout << "Player 2[O] has win" << endl;

	}
	else if (turn == 'O'&& draw == false)
	{
		cout << "Player 1[x] has win" << endl;

	}
	else
	{
		cout << "GAME DRAW!!\n";
	}

}
