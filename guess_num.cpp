
#include <iostream>
using namespace std;


 void compare(int playerChoice, int secretNumber,int &choicesLeft)
 {
        //cout<<"Hey";
        //int ch;
        //ch = &choicesLeft;
        //choicesLeft = ch;
        if(playerChoice ==secretNumber)
        {
                cout<<"OHHHH"<<endl;
                cout << "Well played! You won, "<< playerChoice<< " is the secret number" << endl;
                cout << "\t\t\t Thanks for playing...."<< endl;
                cout << "Play the game again with us!!"<< endl;
                //counter++;
                exit(0);
        }
        else 
        {
                cout << "Sorry, your guess is not correct. Please try again!!!"<<endl;
                cout<<"The secret number is = "<<secretNumber<<endl; 
                choicesLeft--;
                cout << choicesLeft << " choices left..."<< endl;
                        if (choicesLeft == 0) 
                    {
                        cout << "You couldn't find the secret number, it was "<< secretNumber<<endl;
                        cout << "Game Over!!\n\n";
                        cout << "Play the game again to win!!!\n\n";
                    }
        }
 }

int easy(int s_no)
{
        srand(time(0));
        int secretNumber = (rand() % 10)+1;
        return secretNumber;
}
int medium(int s_no)
{
        srand(time(0));
        int secretNumber = (rand() % 25)+1;
        return secretNumber;
}
int hard(int s_no)
{ 
        srand(time(0));
        int secretNumber = (rand() % 50)+1;
        return secretNumber;
}

int main()
{
char again;
 do{
 cout<<"Welcome to guessing game!\n\n";
 cout<<"*************************";
 cout<<"\n"<<"Choose Game Mode to start:\n"<<endl;
 cout<<"(E)asy"<<"\n"<<"(M)edium"<<"\n"<<"(H)ard"<<"\n"<<"E(x)it"<<endl;
 string choice; int secretNumber,playerChoice;
 cin>>choice;
 if(choice=="E"||choice=="e")
        {
                cout<<"easy";
                int choicesLeft = 10;
                for (int i = 1; i <= 10; i++) 
                {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                secretNumber = easy(secretNumber);
                // prompting the player to guess the secret number
                compare(playerChoice,secretNumber,choicesLeft);
                }
        }
        else if(choice=="M"|| choice=="m")
        {
               cout<<"Medium";
                int choicesLeft = 4;
                for (int i = 1; i <= 4; i++) 
                {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                secretNumber = medium(secretNumber);
                // prompting the player to guess the secret number
                compare(playerChoice,secretNumber,choicesLeft);
                 }
        }
        else if(choice=="H" || choice=="h")
        {
                cout<<"Hard";
                int choicesLeft = 3;
                for (int i = 1; i <= 3; i++) 
                {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                secretNumber = hard(secretNumber);
                // prompting the player to guess the secret number
                compare(playerChoice,secretNumber,choicesLeft);
                }
       }
       else if(choice=="X"||choice=="x")
       {
        cout<<"Exit game ";
        return 0;
       }
        cout<<"Do you want to contiue? Press y to continue: ";
        cin>>again;
        } while(again=='y');
        return 0;
}
        