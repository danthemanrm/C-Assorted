/*
simple calculator program
licensed under GNU General Public License 3.0

created--------5/2/16
last updated---5/2/16

changelog:
	v1.0 - program created
	v1.1 - fixed comment spelling ;^)
  */

#include <iostream>
using namespace std;

int main()
{
    int num1; //first number
    int num2; //second number
    int sum; //will be result of first and second number
    int bork;
    std:string restart;
    string operation; //will ask user for operation

    if (restart != "y"){ //welcome message, only shows first time
      cout << "\n/Simple Calculator/\n";
    }

    cout << "\nEnter your equation e.g. 1 + 1\n"; //asks user for equation
    cin >> num1 >> operation >> num2; //first number, operation then second number. user must use spaces or they break the program

    bork = 0; //see line 56

    if (operation == "+"){ //nested if-else statements, makes calculations based on user's inputs
      sum = num1 + num2;
      }
    else{
      if (operation == "-"){
        sum = num1 - num2;
      }
      else{
        if (operation == "*"){
          sum = num1 * num2;
        }
        else{
          if (operation == "/"){
            sum = num1 /num2;
          }
          else{
            bork = 1;
          }
        }
      }
    }

    if (bork == 1){ // validation, if the user inputs an invalid operation type the following message will be displayed:
      cout << "incorrect operation";
    }
    else{ //calculates user's inputs if they aren't stupid ;^)
      cout << "\n" << num1 << " " << operation << " " << num2 << " = " << sum << "\n\n"; //prints the sum of the two numbers
    }

    cout << "Would you like to restart? (y/n)"; //simple restart function -volatile- will destroy program if left null
    cin >> restart;
    if (restart != "n"){
      main(); //restarts function
    }

    return 0;
}
