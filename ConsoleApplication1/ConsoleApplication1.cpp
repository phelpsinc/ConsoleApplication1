/*Author: Chuck Phelps
  Created: 01/30/2017
  Updated: 02/25/2017
  Title: Go - Python Forever For Now 
  Purpose: This program is created to make a game. Python the great 2.7 and Python 3.6 the 
  epic competition for greatness. But together they can form greatness.
  Added 02/25/2017: If statements and character Y or N flag.
  Added 03/14/2017: switch statement to setup a menu to choose your favorite python.
  Added 03/23/2017: Added a forloop in the easter egg to repeat winner 23 times for Jordan's Number.
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
	double const HOWMANYFAVORITENUMBERS = 2;

	//By Python Powers Combine they are taken to a whole new level. 
	//Initialize double pythonPower, favoriteNumber, howManyFavoriteNumbers, and pythonCombinewithFav.
	double powersCombine;
	double favoriteNumber;
	double howManyFavoriteNumbers;
	double pythonCombinewithFav;
	double menuPythonNumber;

	//Initialize String vairables for username within the game.
	string username;

	//Initialize Character if you have used Python. Y - Yes or N - No
	//Initialize Chacarter Menu A, B, and C.
	char pythonYesOrNo;
	char menu;

	//Initialize constant ints below to help with the multiplication later in the game.
	const int PYTHON2DOT7MENU = 1;
	const int PYTHON3DOT6MENU = 2;
	const int PYTHONPOWERCOMBINE = 3;

	//Initialize count variable for the for loop below, cPlusPlus, and cPlusCounter.
	int count;
	int cPlusPlus;
	int cPlusCounter = 0;

	//Combine the powers of PYTHON2DOT7 and PYTHON3DOT6 by multiplying the constants.
	powersCombine = PYTHON2DOT7 * PYTHON3DOT6;

	//Print the welcome message to the game.
	cout << "Welcome to Chuck Phelps's Awesome Go - Python Forever For Now Game!" << endl << endl;

	//Print the output of the PYTHON2DOT7.
	cout << "The power of Python 2.7 is: " << PYTHON2DOT7 << endl << endl;

	//Print the output of the PYTHON3DOT6.
	cout << "The power of Python 3.6 is: " << PYTHON3DOT6 << endl << endl;

	//Print the ouput of the combine power of Python2.7 and Python 3.6.
	cout << "The power of Python2.7 multipled by the power of Python 3.6 is: " << powersCombine << endl << endl;

	//Ask the user for their name and accept spaces with the getline function.
	cout << "Please enter your username for the game: [Press Enter When Complete]: ";
	getline(cin, username);

	//Enter a few new line characters.
	cout << endl << endl;

	//Setting Up the Menu 1 for Python 2.7 2 for Python 3.6 and 3 for Python Combine
	cout << "Choose care the power carefully.";
	cout << endl << endl;
	cout << "Choose (1) for Python 2.7 (2) for Python 3.6 and (3) for Python Combine?:";
	//Accept user input for the menu system and utilize switch to exectue the menu system.
	cin >> menu;

	//Setup the switch system with menu which is defined above by the other characters.
	//The endls help balance the spacing out on the program. 
	//The menu variable is remembered through out the script.
	switch (menu)
	{
	case '1': cout << endl << endl;
		cout << "You have choosen Python 2.7." << endl << endl;
		menuPythonNumber = PYTHON2DOT7;
		break;
	case '2': cout << endl << endl;
		cout << "You have choosen Python 3.6." << endl << endl;
		menuPythonNumber = PYTHON3DOT6;
		break;
	case '3': cout << endl << endl;
		cout << "You have choosen Python Powers Combine." << endl << endl;
		menuPythonNumber = powersCombine;
		break;
	default : cout << endl << endl;
		cout << "Please enter 1, 2, or 3. Please [Enter] to exit and then rerun the program." << endl << endl;
		//This will the ignore the return in the keyboard buffer.
		cin.ignore();
		//Pause the program before exiting.
		getchar();
		return 0;
		break;

	}

	//Ask the user if they can handle the power of Python.
	cout << "Can you handle the power of Python? (Y) = Yes or (N) = No. ";
	cin >> pythonYesOrNo;

	if (pythonYesOrNo == 'Y' || pythonYesOrNo == 'y')
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
			cout << endl << endl;
			//For Loop to let the player know how awesome they are!
			for (count = 0; count <= 23; count++)
				cout << "Winner!!! " << count << endl;
			//Adding some white space to make the program look pretty
			cout << endl << endl;
			cout << "Michael Jordan is the man! Press enter to conclude this session of the game.";
			//This will the ignore the return in the keyboard buffer.
			cin.ignore();

			//Pause the script to observe it before it exits.
			getchar();

			return 0;
		}

		//How many favorite numbers does the user have?
		cout << "How many favorite numbers do you have?(You must have more than 1) ";
		cin >> howManyFavoriteNumbers;

		//Enter a few new line breaks. For good spacing.
		cout << endl << endl;

		//Conditional statement that makes sure that the user has entered more than	1
		// for their favorite number. If it is less than one it will raise it to 2.
		howManyFavoriteNumbers = howManyFavoriteNumbers < 2 ? HOWMANYFAVORITENUMBERS : howManyFavoriteNumbers;

		//Combine the favoriteNumber, howManyFavoriteNumbers, and powersCombine.
		pythonCombinewithFav = menuPythonNumber + (favoriteNumber * howManyFavoriteNumbers);

		//Print the Users Favorite Number.
		cout << "We must becareful! We are combining your favorite number " << favoriteNumber;
		//Print the number of favorite numbers.
		cout << ", multiplied by how many favorite numbers you have " << howManyFavoriteNumbers;
		//Continuing the statement before the calculation.
		cout << " and your choice from above " << menuPythonNumber;
		//Enter a few new line breaks.
		cout << "." << endl << endl;

		//Display the numbers combine with Python Forever.
		cout << "You asked for it and here it is! The numbers are " << pythonCombinewithFav << endl << endl;
	
		

		}
	else // Cannot handle the power.
	{
		//To add some fun for the users that cannot handle the power of Python.
		cout << endl << endl;
		cout << "Python Combine is too powerful for you!";
		cout << endl << endl;
		cout << "On a scale of 9 to 10, how awesome is C++?" << endl;
		cout << "Please enter a number between 9 or 10. (Press Enter): ";
		//The following was based off of a survery call I got from a major vendor.
		//On a scale of 9 to 10 how great did we do. 
		cin >> cPlusPlus;
		cout << endl << endl;
		//The if else if and else statement checks the users input and then runs a while loop per their answer. 
		if (cPlusPlus == 9)
		{
			//while loop to itterate 9 times.
			while (cPlusCounter < 9)
			{
				cout << "C++ is great not" << cPlusCounter;
				cout << " but greater than that. " << endl;
				cPlusCounter++;
			}
			cout << endl << endl;
		}
		else if (cPlusPlus == 10)
		{
			//while loop to itterate 10 times.
			while (cPlusCounter < 10)
			{
				cout << "C++ is great not" << cPlusCounter;
				cout << " but greater than that. " << endl;
				cPlusCounter++;
			}
			cout << endl << endl;
		}

		else{
			cout << "Please answer on scale between 9 and 10. Please rerun the program" << endl << endl;
			//This will the ignore the return in the keyboard buffer.
			cin.ignore();
			//Pause the program before exiting.
			getchar();
			return 0;
		
		}
		
		//This will the ignore the return in the keyboard buffer.
		cin.ignore();

		//Pause the script to observe it before it exits.
		getchar();


	}


	return 0;

}
