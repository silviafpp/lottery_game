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

        // Sort the key numbers
        sort(key.begin(), key.end());

        cout << "Chave: ";

        for (int i = 0; i < 5; i++) {
            cout << key[i] << " ";
        }

        for (int i = 1; i <= 12; i++) {
            star.push_back(i);
        }

        shuffle(star.begin(), star.end(), rng);

        // Sort the star numbers
        sort(star.begin(), star.end());

        cout << "Estrela: ";

        for (int i = 0; i < 2; i++) {
            cout << star[i] << " ";
        }

        cout << "\nDeseja gerar outra chave? [y/N] ";
        cin >> keyPress;

        if(keyPress == 'y') {
            system("clear");
        } else if (keyPress == 'N') {
            cout << "Exiting the game." << endl;
            break;
        }

    } while (true);

    return 0;
}
