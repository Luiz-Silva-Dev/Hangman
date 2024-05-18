#include <iostream>
#include <string>

using namespace std;

const string SECRETWORD = "WATERMELOW";

bool letterExist(char letter) {
    for (char word : SECRETWORD) {
        if (toupper(letter) == word) {
            return true;
        }
    }
    return false;
}   

int main() {
    cout << SECRETWORD << endl;

    bool didNotWin = true;
    bool didNotHang = true;

    while (didNotHang && didNotWin) {
        char guess;
        cin >> guess;
        cout << "His guess was " << guess << endl;

        if (letterExist(guess)){
            cout << "Your guess is right, the secret word contains: " << guess << endl;
        }
        else {
            cout << "Your guess isn't right, the secret word doesn't contain:" << guess << endl;
            
        }
    }
    return 0;
}