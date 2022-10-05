//Kyi Lei Aye
//CS002_77215
//Programming project 4

#include <iostream>
//declaring function
char computerChoice();

int main()
{
    using namespace std;
    int numberOfRound;
    char userChoice, computer;
    cout << "How many times do you want to play?: ";
    cin >> numberOfRound;

    //playing game
    int i = 0;
    while(i < numberOfRound)
    {
        cout << "Please enter 'R' or 'r' for Rock, 'P' or 'p' for Paper, 'S' or 's' for Scissor." << endl;
        cout << "Rock Paper Scissor: ";
        cin >> userChoice;

        //calling function
        computer = computerChoice();
        cout << "Computer's Choice: " << computer << endl;

        //using if function to check winner
        if((computer == 'P' || computer == 'p') && (userChoice == 'R' || userChoice == 'r'))
        {
            cout << "Computer wins!" << endl;
        }
        else if((userChoice == 'R' || userChoice == 'r') && (computer == 'S' || computer == 's'))
        {
            cout << "You win!" << endl;
        }
        else if((userChoice == 'P' || userChoice == 'p') && (computer == 'R' || computer == 'r'))
        {
            cout << "You win!" << endl;
        }
        else if((userChoice == 'P' || userChoice == 'p') && (computer == 'S' || computer == 's'))
        {
            cout << "Computer wins!" << endl;
        }
        else if((userChoice == 'S' || userChoice == 's') && (computer == 'P' || computer == 'p'))
        {
            cout << "You win!" << endl;
        }
        else if((userChoice == 'S' || userChoice == 's') && (computer == 'R' || computer == 'r'))
        {
            cout << "Computer wins!" << endl;
        }
        else
        {
            cout << "Even!!" << endl;
        }
        i++;
    }
    return 0;
}

//function for computer choice
char computerChoice() {
    //srand(time(0));
    int random = (rand() % 6);
    char possibleChoices[] = {'R', 'r', 'P', 'p', 'S', 's'};
    char choice = possibleChoices[random];
    return choice;
}
