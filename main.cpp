#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    char ch;

    do{
    int choice;
    cout << "Winning Rules of the Rock paper scissor game as follows:" << endl;
    cout << "Rock vs paper -> paper wins" << endl;
    cout << "Rock vs scissor -> Rock wins" << endl;
    cout << "Paper vs scissor -> scissor wins" << endl;
    cout << "--------------------------------------------------------" << endl;

    cout << "1.Rock"<< endl;
    cout << "2.Paper"<< endl;
    cout << "3.Scissors"<< endl;
    cin >> choice;
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
    if(choice == 1 && ai == 1){
         cout << "TIE" << endl;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;

         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
    
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
        
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
  
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
       
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
       
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
        
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
       
         }
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;

         }while(ch == 'Y' || ch == 'y');
    return 0;


}
