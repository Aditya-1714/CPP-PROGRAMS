#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];

public:
    void input() {
        cout << "Enter 5 exam scores: ";

        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }

        return sum;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    int annaScore = students[0].calculateTotalScore();

    int count = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].calculateTotalScore() > annaScore) {
            count++;
        }
    }

    cout << "\nNumber of students who scored higher than Anna: "
         << count << endl;

    return 0;
}