#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int maxKey = 50;
    srand(time(0));

    cout << "Chave: ";

    for(int i = 0; i<5; i++) { 
        cout << rand()%maxKey;
            if (i < 4) {
                cout << " ";
      }
   }

    int maxStar = 12;

    cout << "  Estrela: ";

    for(int i = 0; i<2; i++) { 
        cout << rand()%maxStar;
            if (i < 1) {
                cout << " ";
      }
   }
    return 0;
}