#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    char keyPress;

    do {
        vector<int> key;
        vector<int> star;

        for (int i = 1; i <= 50; i++) {
            key.push_back(i);
        }

        random_device rd;
        mt19937 rng(rd());

        shuffle(key.begin(), key.end(), rng);
        sort(key.begin(), key.begin() + 5);  

        cout << "Chave: ";

        for (int i = 0; i < 5; i++) {
            cout << key[i] << " ";
        }

        for (int i = 1; i <= 12; i++) {
            star.push_back(i);
        }

        shuffle(star.begin(), star.end(), rng);
        sort(star.begin(), star.begin() + 2);  

        cout << "Estrela: ";

        for (int i = 0; i < 2; i++) {
            cout << star[i] << " ";
        }

        cout << "\nDeseja gerar outra chave? [y/N] ";
        cin >> keyPress;

        if(keyPress == 'Y') {

            system("clear");

        } else if (keyPress == 'n') {

            cout << "Exiting the game." << endl;
            
            break;
        }

    } while (true);

    return 0;
}
