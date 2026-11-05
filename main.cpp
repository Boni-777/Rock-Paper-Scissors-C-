#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int player, computer;
    int playerScore = 0, computerScore = 0;
    int round = 1;

    string choices[] = {"Rock", "Paper", "Scissors"};

    cout << "============================\n";
    cout << "    ROCK PAPER SCISSORS\n";
    cout << "============================\n";
    cout << "First to 3 points wins!\n";

    while (playerScore < 3 && computerScore < 3) {

        cout << "\n---------- ROUND " << round << " ----------\n";

        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Your choice: ";
        cin >> player;

        if (player < 1 || player > 3) {
            cout << "Invalid choice! Enter 1, 2, or 3.\n";
            continue;
        }

        computer = rand() % 3 + 1;

        cout << "\nYou chose: " << choices[player - 1] << endl;
        cout << "Computer chose: " << choices[computer - 1] << endl;

        if (player == computer) {
            cout << "It's a tie! No points awarded.\n";
        }
        else if ((player == 1 && computer == 3) ||
                 (player == 2 && computer == 1) ||
                 (player == 3 && computer == 2)) {

            cout << "You win this round!\n";
            playerScore++;
        }
        else {
            cout << "Computer wins this round!\n";
            computerScore++;
        }

        cout << "\nScore: You " << playerScore
             << " - " << computerScore << " Computer\n";

        round++;
    }

    cout << "\n============================\n";
    cout << "          GAME OVER\n";
    cout << "============================\n";

    if (playerScore == 3) {
        cout << "CONGRATULATIONS! YOU WON!\n";
    }
    else {
        cout << "COMPUTER WINS THE GAME!\n";
    }

    cout << "Final Score: You " << playerScore
         << " - " << computerScore << " Computer\n";

    return 0;
}
