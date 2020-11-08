#include<iostream>
using namespace std;
int main()
{
    float celsius;
    cout<<"Введите значение градусов по шкале Цельсия: ";
    cin>>celsius;
    cout<<celsius<<" градусов по цельсию = "<<(celsius*9/5)+32<<" градусов по фарингейту.";
}