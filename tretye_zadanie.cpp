#include <iostream>
using namespace std;

// ������� ��� ������������ ����� ����� � �����
int rearrangeNumber(int num) {
    // ��������, �� ����� � ������������
    if (num >= 100 && num <= 999) {
        // ��������� ��� �����
        int leftDigit = num / 100;

        // ������������� ��� ����� � �����
        num = num % 100 * 10 + leftDigit;

        return num;
    } else {
        // ��������� -1, ���� ����� �� � ������������
        return -1;
    }
}

int main() {
    int number;
    setlocale(LC_ALL, "ukr");
    // ������� ����������� �����
    cout << "������ ����������� �����: ";
    cin >> number;

    // ��������� ������� ��� ������������ ����� ����� � �����
    int result = rearrangeNumber(number);

    if (result != -1) {
        // �������� ���������
        cout << "���������: " << result << endl;
    } else {
        cout << "���� �����, ������ ����������� �����." << endl;
    }

    return 0;
}