#include <iostream>
using namespace std;

int Sign(int X) {
    if(X < 0) {
        return -1;
    }
    else if(X == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    int A, B;
    cout<<"Enter A: ";
    cin>>A;
    cout<<"Enter B: ";
    cin>>B;
    cout<<"Result: " << Sign(A) + Sign(B);
    return 0;
}