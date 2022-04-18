#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roundNum = 1;
//int player1CardNum;
//int player2CardNum;
int winningSpace = 30;
bool atHomePlayer1 = true;
bool atHomePlayer2 = true;
char playAgain = 'y';
int player1Spaces = 0;
int player2Spaces = 0;
bool if4;



void player1Turn()
{
	int cardNum = 1 + (rand() % 12);
	
	

	cout << "---------------------------------------" << endl << " ***Player 1***  \n" << "---------------------------------------\n" ;
	cout << "You are at space #: " << player1Spaces << endl<< endl;

	
	// cout << "Your Card Number " << cardNum << endl;
	



/*	if (cardNum == 1 || cardNum == 2 )
	{

		if (cardNum == 2 && atHomePlayer1 == true)
		{
			atHomePlayer1 = false;
			player1Spaces + 1;
		}
		else
		{

			atHomePlayer1 = false;
		}
	}
	*/

	
	
		cout << "You got a: " << cardNum << endl;




	if (cardNum != 1 && cardNum != 2)
	{
		if (atHomePlayer1 == true)
		{
			cout << endl << " Did not get (1 or 2) " << endl << "Need to skip your turn total steps for Player 2: " << player2Spaces << endl;

		}
	}


	if (cardNum == 4 && atHomePlayer1 == false)
	{
		int x;
		bool keepAsking = true;
		

		while (keepAsking == true)
		{
			cout << "Would you like to move forward 4 steps or take your opponents spot ? (1 or 2)" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
				keepAsking = false;
				break;

			case 2:
				player1Spaces = player2Spaces;
				atHomePlayer2 = true;
				keepAsking = false;
				player2Spaces = 0;
				;

			default:
				break;
			}
		}
	}


	
		if (atHomePlayer1 == false)
		{
			player1Spaces += cardNum;
			//		cout << "You are at space #: " << player1Spaces << endl;
			if (player1Spaces > 30)
			{
				player1Spaces -= cardNum;
				cout << "Oops! You need exactly 30 to win try again!!" << endl;
				cout << "You are back at space # " << player1Spaces << endl;

			}

		}
	
	if (cardNum == 1 || cardNum == 2)
	{

		if (cardNum == 2 && atHomePlayer1 == true)
		{
			atHomePlayer1 = false;
			player1Spaces = player1Spaces + 1;
		}
		else if (cardNum == 1 && atHomePlayer1 == true)
		{

			cout <<endl <<"You got a one you are on the start!" << endl;
			atHomePlayer1 = false;
			player1Spaces = 0;
		}
	}



	if (player1Spaces == winningSpace)
	{
		cout << "You have Won!!" << endl;
	}

	cout <<endl<< "Your Card Number " << cardNum << endl;

	cout << "You are at space # " << player1Spaces << endl;
}


void player2Turn()
{
	int cardNum =  1 + (rand() %12);

	cout << "---------------------------------------" << endl << " ***Player 2*** " << endl << "---------------------------------------" << endl;
	cout << "You are on space # " << player2Spaces << endl<< endl;

	// cout << "Your Card Number " << cardNum << endl;

	/*
	if (cardNum == 1 || cardNum == 2)
	{

		if (cardNum == 2 && atHomePlayer2 == true)
		{
			atHomePlayer2 = false;
			player1Spaces + 1;
			cout << "You got a two you are on space number 1" << endl;
		}
		else
		{
			cout << "You got a one you are on the start!"<< endl;
			atHomePlayer2 = false;
		}
	}
	*/
	

		cout << "You got a: " << cardNum <<" "<<  endl;

	

	if (cardNum != 1 && cardNum != 2)
	{
		if (atHomePlayer2 == true)
		{
			cout << endl << " Did not get (1 or 2) " << endl << "Need to skip your turn total steps for Player 2: " << player2Spaces << endl;

		}
	}
	

		if (cardNum == 4 && atHomePlayer2 == false)
		{
			int x;
			bool keepAsking2 = true;
			while (keepAsking2 == true)
			{
				cout << "Would you like to move forward 4 steps or take your opponents spot ? (1 or 2)" << endl;
				cin >> x;
				switch (x)
				{
				case 1:
					keepAsking2 = false;
					break;

				case 2:
					player2Spaces = player1Spaces;
					atHomePlayer1 = true;
					keepAsking2 = false;
					player1Spaces = 0;

				default:
					break;
				}
			}
		}
	



	if (atHomePlayer2 == true)
	{
		player2Spaces += cardNum;
//		cout << "You  are on space # " << atHomePlayer2 << endl;
		if (player2Spaces > 30)
		{
			player2Spaces -= cardNum;
			cout << "Oops! You need exactly 30 to win try again!!" << endl;
			cout << "You  are back on space #" << player2Spaces << endl;

		}

	}

	if (cardNum == 1 || cardNum == 2)
	{

		if (cardNum == 2 && atHomePlayer2 == true)
		{
			atHomePlayer2 = false;
			player2Spaces = player2Spaces + 1;
			cout << "You got a two you are on space number 1" << endl;
		}
		else if (cardNum == 1 && atHomePlayer2 == true)
		{
			cout << "You got a one you are on the start!" << endl;
			atHomePlayer2 = false;
			player2Spaces = 0;
		}
	}




	if (player2Spaces == 30)
	{
		cout << "You have Won!!" << endl;
	}

	cout  <<endl << "Your Card Number " << cardNum << endl;

	cout << "You are at space # " << player2Spaces << endl;

}

int main()
{

	srand(time(0));
	int cardNum = 1 + (rand() % 12) ;

	while (playAgain == 'y')
	{
		
		cout <<endl <<endl<< endl << "Round " << roundNum << endl;

		

		player1Turn();
		player2Turn();


		if (player1Spaces == winningSpace )
		{
			cout <<endl << endl <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl <<  "Player 1 is at 30 they have won!!! " << endl;
			cout << "would you like to play again ?  (y/n)" << endl;
			cin >> playAgain;

		}
		else if ( player2Spaces == winningSpace)
		{
			cout <<endl << endl << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << "Player 2 is at 30 they have won!!! " << endl;
			cout << "would you like to play again ?  (y/n)" << endl;
			cin >> playAgain;

		}


		roundNum++;
	}



	return 0;

}