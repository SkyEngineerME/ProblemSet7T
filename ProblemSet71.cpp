#include <iostream>
using namespace std;

int main(){
    char alpha;
    do{
     cout << "\n" << "Enter alphabet: ";
     cin >> alpha;
     switch(alpha){
     case 'A':
      cout << "Awesome";
      break;

      case 'B':
      cout << "Great";
      break;

      case 'C':
      cout << "Good";
     break;

      case 'D':
      cout << "Noob";
      break;
      
      case 'E';
      break;
      
      default:
      cout << "Error: Invalid Input";
      break;
     }
    
    
    }while(alpha != 'E');

    return 0;
}