/**

Description: This program prompts user to enter a string, it then returns how many 
characters are in the string and at which character each input is at. 
Filename: fall2018-midterm
Author: Troy Millard
Date: 10-18-2018

*/

/*
Write a program that has the following requirements:

a function called get_string that will prompt the user to enter a string and will return 
the string. This function should accept the prompt(question) text as a string parameter.
a function called char_count, this function will accept 2 parameters a string and a 
character and will return the number of the given character in the given string.
when completed, push the repository
submit the URL for your completed repository on the CIS201 Midterm web page.
*/

#include<iostream>
#include<string>

using namespace std;

bool is_digit(char c) //set digit parameters for main and get_string
{
    return c >= '0' && c <= '9';
}

int to_int(char c) //set character parameters for main and get_string
{
    return c - '0';
}

int get_string(string hex) //count characters in string hex
{
   int count = 0;
   cout << "the characters and count for " << hex << "are : " << endl;
   for (int i=0;i<hex.length();i++)
    {
        cout << "at i= " << i << endl << "character is " << hex.at(i) << endl;
        if(hex.at(i))
            count += 1;
    }

   return count;
}


int main() //initialize string, send it through parameters and get string, then returns characters and count

{
   string hex;

  // string hex = "123456789abcdef"; this string did work till I read the directions required a prompt, I almost had hexadecimal to binary 
  // conversion too it actually wrote count 192 for 123456789abcdef so close I'm sure 0123456789abcdefg would of wrote 256 :(
  // too bad though I left this message just to remember that almost possiblity
   
   cout << "please enter a string of characters" << endl;
   cin >> hex;

   cout << "the amount of characters is : " << get_string(hex) << endl;
   return 0;
}
