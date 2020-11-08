#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char s;
    cout << "Введите букву: ";
    cin >> s;
    cout << islower(s);
    return 0;
}