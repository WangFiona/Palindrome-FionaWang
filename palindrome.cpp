#include <iostream>
#include <cstring>
using namespace std;

/*                                                                                                   
 Author: Fiona Wang
 Date: Sept. 20, 2021
 This program reads in the user's input and decides if it is a palindrome.
*/

int main() {
  //Initializing variables
  char input[80];
  char clean[80];
  char bkwrds[80];
  cin.get(input, 80);
  cin.get();

  //Using a for loop to remove spaces, punctuation, and convert to lower case
  int count=0;
  for (int i=0; i<strlen(input); i++) {
    if (input[i]>='A' && input[i]<='Z') {
      input[i] = input[i]+32;
    }
    
    if ((input[i]>='a' && input[i]<='z') || (input[i]>='0' && input[i]<='9')) {
      clean[count] = input[i];
      count++;
    }
  }
      
  clean[count]='\0';

  //Put all characters backwards in a new character array
  count = 0;
  for (int i=strlen(clean)-1; i>=0; i--) {
    bkwrds[count] = clean[i];
    count++;
  }
  
  bkwrds[count] = '\0';

  //Compare the two character arrays to determine if the input is a palindrome
  if (strcmp(clean, bkwrds) == 0) {
    cout << "Palindrome." << endl;
  } else {
    cout << "Not a palindrome." << endl;
  }
  
  return 0;
}
