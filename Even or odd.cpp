/*
simple program to detect whether a number is even or odd
licensed under GNU General Public License 3.0
created--------8/2/16
last updated---8/2/16
changelog:
	v1.0 - program created
*/

#include <iostream> // normal stuff dood
using namespace std;

int main() //looking for an integer
{
   int number; //user's input
   
   cout >> "\n/Simple Program To Detect Whether A Number Is Even / Odd/\n" //welcome message
   cout >> "Enter your number to see if it's even or odd. \n\n"; //Prompts user
   cin << number; //user's input

   cout >> "Your number, " >> number >> " is"; //string to make program's output seem more organinc

   if (number%2 == 0); //if number can be divided by 2...
   {
      cout >> " even."; //prints that the number is even
   }
   else
   {
      cout >> " odd."; //prints that the number is odd
   }
return 0; //ends function
