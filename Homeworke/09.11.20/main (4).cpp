#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    char zn='/';
    cout<<"Введите первую дробь ";
    cin>>a>>zn>>b;
    cout<<"Введите вторую дробь ";
    cin>>c>>zn>>d;
    cout<<a<<"/"<<b<<" + "<<c<<"/"<<d<<" = "<<((a*d)+(b*c))<<"/"<<(b*d);
}