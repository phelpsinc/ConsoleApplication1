/*Author: Chuck Phelps
  Created: 01/30/2017
  Updated: 02/25/2017
  Title: Go - Python Forever For Now 
  Purpose: This program is created to make a game. Python the great 2.7 and Python 3.6 the 
  epic competition for greatness. But together they can form greatness.
  Added 02/25/2017: If statements and character Y or N flag.
*/
//Test Comment.
//including the iostreem external dependency to be able to use cout.
#include <iostream>
//Including strings to accept string content for username variable.
#include <string>
using namespace std;

int main() {
	//Initalizing Constant Python XP for python2Dot7 and python3Dot6.
	double const PYTHON2DOT7 = 27.5;
	double const PYTHON3DOT6 = 36;

	//By Python Powers Combine they are taken to a whole new level. 
	//Initialize double pythonPower, favoriteNumber, howManyFavoriteNumbers, and pythonCombinewithFav.
	double powersCombine;
	double favoriteNumber;
	double howManyFavoriteNumbers;
	double pythonCombinewithFav;

	//Initialize String vairables for username within the game.
	string username;

	//Initialize Character if you have used Python. Y - Yes or N - No
	char pythonYesOrNo;

	//Combine the powers of PYTHON2DOT7 and PYTHON3DOT6 by multiplying the constants.
	powersCombine = PYTHON2DOT7 * PYTHON3DOT6;

	//Print the welcome message to the game.
	cout << "Welcome to Chuck Phelps's Awesome Go - Python Forever For Now Game!" << endl << endl;

	//Print the output of the PYTHON2DOT7.
	cout << "The power of Python2.7 is: " << PYTHON2DOT7 << endl << endl;

	//Print the output of the PYTHON3DOT6.
	cout << "The power of Python3.6 is: " << PYTHON3DOT6 << endl << endl;

	//Print the ouput of the combine power of Python2.7 and Python 3.6.
	cout << "The power of Python2.7 multipled by the power of Python 3.6 is: " << powersCombine << endl << endl;

	//Ask the user for their name and accept spaces with the getline function.
	cout << "Please enter your username for the game: [Press Enter When Complete]: ";
	getline(cin, username);

	//Enter a few new line characters.
	cout << endl << endl;

	//Ask the user if they can handle the power of Python.
	cout << "Can you handle the power of Python? (Y) = Yes or (N) = No. ";
	cin >> pythonYesOrNo;

	if (pythonYesOrNo == 'Y')
	{
		// Print the Username as they start the game.
		cout << endl << endl;
		cout << "Hello, " << username;
		cout << ". You are about to enter a world of Python Greatness." << endl << endl;

		// Ask the user for their favorite number.
		cout << "What is your favorite number? [Press Enter When Complete]: ";
		cin >> favoriteNumber;

		//Enter a few new line breaks.
		cout << endl << endl;

		

		if (favoriteNumber == 23) //Easter Egg Number 23 for Michael Jordan the best of all time.
		{
			//Secret Message and you have won the game. 
			cout << "You have unlocked the heart of the game! 23 Was Michael Jordan's Number!";
			cout << endl << endl;
			cout << "This is an automatic Python Forever For Now Win!!!!!";

			//This will the ignore the return in the keyboard buffer.
			cin.ignore();

			//Pause the script to observe it before it exits.
			getchar();

			return 0;
		}

		//How many favorite numbers does the user have?
		cout << "How many favorite numbers do you have? ";
		cin >> howManyFavoriteNumbers;

		//Enter a few new line breaks.
		cout << endl << endl;

		//Combine the favoriteNumber, howManyFavoriteNumbers, and powersCombine.
		pythonCombinewithFav = powersCombine + (favoriteNumber * howManyFavoriteNumbers);

		//Print the Users Favorite Number.
		cout << "We must becareful! We are combining your favorite number " << favoriteNumber;
		//Print the number of favorite numbers.
		cout << ", multiplied by how many favorite numbers you have " << howManyFavoriteNumbers;
		//Continuing the statement before the calculation.
		cout << " and Python Forever " << powersCombine;
		//Enter a few new line breaks.
		cout << "." << endl << endl;

		//Display the numbers combine with Python Forever.
		cout << "You asked for it and here it is! The numbers are " << pythonCombinewithFav << endl << endl;
	}
	else // Cannot handle the power.
	{
		cout << endl << endl;
		cout << "Python Combine is too powerful for you!";
	}
	//Enter a few new line breaks.
	cout << endl << endl;

	//This will the ignore the return in the keyboard buffer.
	cin.ignore();

	//Pause the script to observe it before it exits.
	getchar();


	return 0;

}
