#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int playerChoice, computerChoice;

    // Seed the random number generator
    srand(time(0));

    cout << "Chào mừng bạn đến với trò chơi kéo búa bao!" << endl;
    cout << "1. Kéo" << endl;
    cout << "2. Búa" << endl;
    cout << "3. Bao" << endl;
    cout << "Người chơi 1 chọn2 (1-3): ";
    cin >> playerChoice;

    // Generate a random choice for the computer
    computerChoice = rand() % 3 + 1;

    cout << "Người chơi 2 đã chọn: ";
    switch (computerChoice) {
        case 1:
            cout << "Kéo" << endl;
            break;
        case 2:
            cout << "Búa" << endl;
            break;
        case 3:
            cout << "Bao" << endl;
            break;
    }

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "Hòa!" << endl;
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        cout << "Người chơi 1 thắng!" << endl;
    } else {
        cout << "Người chơi 2 thắng!" << endl;
    }

    return 0;
}
