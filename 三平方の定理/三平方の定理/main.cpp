#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL)); 

    int a, b, c;
    double c_actual, c_answer;
    char choice;

    do {
        a = rand() % 100 + 1; // 1 ~ 100�͈̔͂Ń����_���Ȑ����𐶐�
        b = rand() % 100 + 1;
        c_actual = sqrt(a * a + b * b); // ���ۂ̎Εӂ̒������v�Z
        cout << "a = " << a << ", b = " << b << ", c(�Εӂ̒���) = ?" << endl;
        cin >> c_answer;
        if (abs(c_actual - c_answer) < 0.001) {
            cout << "����" << endl;
        }
        else {
            cout << "�s�����B������" << c_actual << "����!" << endl;
        }
        cout << "������x���܂����H (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}
