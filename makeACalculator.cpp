#include <iostream>
#include <string>
using namespace std;

//global variables

char continuation, condition, operation;
int x, y;

void calculate()
{
    switch (operation)
    {
        case '+':
            cout << x+y;
            break;
        case '-':
            cout << x-y;
            break;
        case '/':
            cout << x/y;
            break;
        case '*':
            cout << x*y;
            break;
    }
    
}

//Portable console clearing operation.
void continueAndClear()
{

    if(continuation == 'y' || continuation == 'Y')
    {
        condition = true;
        cout << string( 100, '\n' );

    }
    else
    {
        //If user types anything other than y or capital Y then simply exit.
        condition = false;
        cout << string( 100, '\n' );
    }
}


int main()
{
    condition = true;
    
    //TO:DO
        //string calculatorType;
        //cout << "Which type of calculator do you wish to use?";
    
    while(condition)
    {
        //Retrieve the user's operation in the form of a char datatype.
        cout << "Do you want to do addition, division, subtraction, or multiplication?\n Type \"/\", \"*\", \"-\", or \"+\": ";
    	cin >> operation;
    
        //Retrieve x and y values from user.
        cout << "Now type the first number (x): ";
        cin >> x;
        cout << "Now type the second number (y): "; 
        cin >> y;
    
        //Determine the user's math operation through a switch.
        calculate();

    	//Ask user if they want to continue.
    	cout << "\nWould you like to continue? (y/n): "; 
        cin >> continuation;
    	
    	continueAndClear();

    	
    	
    }
 
	return 0;
}
