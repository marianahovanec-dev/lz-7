#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    if (size <= 0) {
        cout << "Некоректний розмір масиву!" << endl;
        return 1;
    }

    int* arr = new int[size]; // виділення пам'яті під масив

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> *(arr + i); // введення через арифметику вказівників
    }

    cout << "Масив: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Числа, які входять у масив лише один раз: ";
    bool foundUnique = false;

    for (int i = 0; i < size; i++) {
        int count = 0;
        // Рахуємо, скільки разів елемент зустрічається в масиві
        for (int j = 0; j < size; j++) {
            if (*(arr + i) == *(arr + j)) {
                count++;
            }
        }
        // Якщо зустрічається лише 1 раз, виводимо його
        if (count == 1) {
            cout << *(arr + i) << " ";
            foundUnique = true;
        }
    }

    if (!foundUnique) {
        cout << "немає таких чисел";
    }
    cout << endl;

    delete[] arr; // звільнення пам'яті

    return 0;
}
