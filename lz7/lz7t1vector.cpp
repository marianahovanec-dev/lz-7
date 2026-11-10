#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    vector<int> vec;

    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 21 - 10;   // випадкові числа від -10 до 10
        vec.push_back(randomNum);
    }

    cout << "Початковий масив:\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Числа, які входять у масив лише один раз: ";
    bool foundUnique = false;

    for (int i = 0; i < vec.size(); i++) {
        int count = 0;
        for (int j = 0; j < vec.size(); j++) {
            if (vec[i] == vec[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << vec[i] << " ";
            foundUnique = true;
        }
    }

    if (!foundUnique) {
        cout << "немає таких чисел";
    }
    cout << endl;

    return 0;
}
