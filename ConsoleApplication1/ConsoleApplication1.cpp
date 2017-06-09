/*Author: Chuck Phelps
  Created: 01/30/2017
  Updated: 04/24/2017
  Title: Go - Python Forever For Now 
  Purpose: This program is created to make a game. Python the great 2.7 and Python 3.6 the 
  epic competition for greatness. But together they can form greatness.
  Added 02/25/2017: If statements and character Y or N flag.
  Added 03/14/2017: switch statement to setup a menu to choose your favorite python.
  Added 03/23/2017: Added a forloop in the easter egg to repeat winner 23 times for Jordan's Number.
  Added 03/30/2017: Write to a file with fstream.
  Added 04/06/2017: Added two prototype fucntions. One to display a menu and another to display a bowling average.
  Removed 04/13/2017: CPlusPlus Menu that was commented out.
  Added 04/14/2017: A Create directory function to see if a directory exists or not. This got rid of a untidy message related to a directory already existing.
  Adjusted 04/24/2017: Changed the bowling average from a void function to return a value as an int. int bowlingForCplus.
  Added 04/24/2017: Added a stub function to add code later that will calculate two doubles.

  IMPORTANT NOTE - UNDER PROJECT PROPERTIES -> General -> THE CHARACTER SET MUST BE SET TO "Use Multi-Byte Character Set".
*/
//Test Comment.
//including the iostreem external dependency to be able to use cout.
#include <iostream>
//Including strings to accept string content for username variable.
#include <string>
//Include fstream to open, write and read to a file.
#include <fstream>
//Included to create a directory.
#include <windows.h>

using namespace std;

//Fucntion Prototypes.
void pythonMenu();
//int cPlusMenu();
int bowlingForCplus(int, int, int);
//This was added to get rid of the message of a folder being displayed at the top of my program.
void CreateFolder(const char * path);
//Stubs function to test for a future call with a double and double.
void futureCall(double, double);


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
	//String to be entered into the winning file.
	string michaelJordanWin = "You have unlocked the heart of the game! 23 Was Michael Jordan's Number!";
	

	//Initialize Character if you have used Python. Y - Yes or N - No
	//Initialize Chacarter Menu A, B, and C.
	char pythonYesOrNo;
	char menu;

	//Initialize constant ints below to help with the multiplication later in the game.
	const int PYTHON2DOT7MENU = 1;
	const int PYTHON3DOT6MENU = 2;
	const int PYTHONPOWERCOMBINE = 3;
	const int CPLUSBOWLING = 4;
	const int FUTURECALL = 5;

	//const char path2 = outputFolder;
	
	//Initialize count variable for the for loop below, cPlusPlus, cPlusCounter, and bowling score.
	// bowlingForCplusAvg was added to return an int.
	int count;
	int cPlusPlus;
	int cPlusCounter = 0;
	int bowlsc1;
	int bowlsc2;
	int bowlsc3;
	int bowlingForCplusAvg;

	//Function called to create a directory called temporary. 
	CreateFolder("C:\\temporary\\");

	
	ofstream outputFile;
	ofstream outputFile2;

	//Open the output files likeMike and dolphins.
	outputFile.open("C:\\temporary\\likeMike.txt");
	outputFile2.open("C:\\temporary\\dolphins.txt");

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

	pythonMenu();
	//Accept user input for the menu system and utilize switch to exectue the menu system.
	cin >> menu;

	//Setup the switch system with menu which is defined above by the other characters.
	//The endls help balance the spacing out on the program. 
	//The menu variable is remembered through out the script.
	//Added case 4 for a bowling averaged.
	//Added case 5 for a future function. 
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
	case '4': cout << endl << endl;
		cout << "You have chosen bowling with cPlusPlus." << endl << endl;
		menuPythonNumber = CPLUSBOWLING;
		break;
	case '5': cout << endl << endl;
		cout << "This will call a function later in the program." << endl << endl;
		menuPythonNumber = FUTURECALL;
		break;
	default: cout << endl << endl;
		cout << "Please enter 1, 2, 3, or 4. Please [Enter] to exit and then rerun the program." << endl << endl;
		//This will the ignore the return in the keyboard buffer.
		cin.ignore();
		//Pause the program before exiting.
		getchar();
		return 0;
		break;

	}

	if (menuPythonNumber == 4)

	{
		//Get three bowling scores you would like to see the average of.
		cout << "Enter your three bowling scores below and cPlusPlus will display your average. :)" << endl;
		cout << "Press Enter After Each Score is entered: " << endl;
		//Collect the scores.
			cin >> bowlsc1 >> bowlsc2 >> bowlsc3;
	    // Call the bowling for Cplus function and pass the bowling scores to the fucntion.
		bowlingForCplusAvg = bowlingForCplus(bowlsc1, bowlsc2, bowlsc3);
		cout << endl
			<< "Your Average is: ";
		cout << bowlingForCplusAvg << endl;
		cout << "Press Enter to End the Game.";
		cin.ignore();
		//Pause the program before exiting.
		getchar();
		return 0;

	}
	//This if statement was placed here for a future call. As the user goes through it will return them back to the program.
	if (menuPythonNumber == 5)

	{
		//Call this future fucntion.
		futureCall(1.2, 1.2);
		cout << endl <<endl;
		cout << "Press Enter to continue.";
		cout << endl << endl;
		//Pause the program before exiting.
		//This will the ignore the return in the keyboard buffer.
		cin.ignore();

		//Pause the script to observe it before it exits.
		getchar();

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
			cout << "---------------------------------------------------" << endl;
			//For Loop to let the player know how awesome they are!
			for (count = 0; count <= 23; count++)
				cout << "Winner!!! " << count << endl <<endl;
			//Adding some white space to make the program look pretty
			cout << endl << endl;
			

			//Enter Data into the likeMike.txt file.
			//This will enter the username and the value of the Python you had chosen earlier.
			outputFile << username;
			outputFile << ", The value of the Python you have chosen is ";
			outputFile << menuPythonNumber << endl;
			outputFile << "!";
			outputFile << michaelJordanWin << endl;

			//Close the file.
			outputFile.close();

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
	
		//This will the ignore the return in the keyboard buffer.
		cin.ignore();

		//Pause the script to observe it before it exits.
		getchar();
		return 0;

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
		//The if else if and else statement checks the users input and then runs a
		//while loop per their answer.

		//The if else if and else statement checks the users input and then runs a while loop per their answer. 
		if (cPlusPlus == 9)
		{
			//while loop to itterate 9 times.
			while (cPlusCounter < 10)
			{
				cout << "C++ is great" << cPlusCounter;
				cout << " time(s). " << endl;
				cPlusCounter++;
			}
			cout << endl << endl;
		}
		else if (cPlusPlus == 10)
		{
			//while loop to itterate 10 times.
			while (cPlusCounter < 11)
			{
				cout << "C++ is great" << cPlusCounter;
				cout << " time(s). " << endl;
				cPlusCounter++;
			}
			cout << endl << endl;
		}

		else if (cPlusPlus == 11)
		{
			//while loop to itterate 11 times. With an Easter egg for the Dolphins
			while (cPlusCounter < 12)
			{
				cout << "Go Dolphins" << cPlusCounter;
				cout << " time(s). " << endl;
				
				outputFile2 << "Go Dolphins" << cPlusCounter;
				outputFile2 << " time(s). " << endl;

				cPlusCounter++;
			}
			
			// A couple of lines to space out the message.
			cout << endl << endl;
			//Add a few line spaces to the outputFile2.
			outputFile2 << endl;

			//This is a message for discovering the easter egg.
			cout << "You have discovered another Easter Egg. Press Enter to close  the program.";
			//Add the same message to the Easter Egg file.
			outputFile2 << "You have discovered another Easter Egg. Press Enter to close  the program.";
			
			    //Close the file.
				outputFile2.close();

				//This will the ignore the return in the keyboard buffer.
				cin.ignore();

				//Pause the script to observe it before it exits.
				getchar();

				return 0;
			
		}

		else{
			cout << "Please answer on scale between 9 and 10. Please rerun the program. Press Enter." << endl << endl;
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


//**********************************************************************************
// Defining a void function for calling the menu earlier in the program.
//**********************************************************************************
void pythonMenu()
{
	//Setting Up the Menu 1 for Python 2.7 2 for Python 3.6 and 3 for Python Combine
	//This is displayed as a menu redployed as a function.
	cout << "Choose the power carefully. \n"
		<< endl << endl
		<< "Choose\n"
		<< endl
		<< "(1) Python 2.7\n"
		<< "(2) Python 3.6 \n"
		<< "(3) Python Combine? \n" 
		<< "(4) bowling with cPlusPlus : \n"
		<< "(5) Future Call ";
}
//This fucntion was modified to return a value. 
int bowlingForCplus(int bowl1, int bowl2, int bowl3)
{
	
	return (bowl1 + bowl2 + bowl3) / 3;	
}

//Create a fucntion to see if a folder exists. We had to enable use of 
void CreateFolder(const char * path)
{
	if (!CreateDirectory(path, NULL))
	{
		return;
	}
}

//Added this stub function defintion to add some code at a later time.
void futureCall(double future1, double future2)
{
	cout << "Do some cool stuff here in the future call.";
}