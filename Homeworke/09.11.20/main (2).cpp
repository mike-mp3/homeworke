#include<iostream>
using namespace std;
int main()
{
    const float pound=1.487;
    const float franc=0.172;
    const float mark=0.584;
    const float JPY=0.00955;
    int dollar;
    
    cout<<"Введите количество долларов: $";
    cin>>dollar;
    cout<<"1 фунт = $"<<dollar/pound;
    cout<<"\n1 франк = $"<<dollar/franc;
    cout<<"\n1 нем. марка = $"<<dollar/mark;
    cout<<"\n1 японская иена = $"<<dollar/JPY;
}