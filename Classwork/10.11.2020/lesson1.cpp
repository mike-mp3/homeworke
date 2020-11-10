#include <iostream>

using namespace std;

int main()
{
    int milk{1},chocolate{1},coffe{1};
    float Cmilk{60},Cchocolate{44},Ccoffe{99};
   
    
    cout<<"Введи количество молока ";
    cin >>milk;
    
    cout<<"Теперь цену ";
    cin >>Cmilk;
    
    cout<<"Введи количество шоколада ";
    cin >>chocolate;
    
    cout<<"Теперь цену ";
    cin >>Cchocolate;
    
    cout<<"Введи количество банок кофе ";
    cin >>coffe;
    
    cout<<"Теперь цену ";
    cin >>Ccoffe;
    
    float all { Cmilk * milk + Cchocolate * chocolate + coffe * Ccoffe };
     
    cout<<"Цена за шоколад: "<<Cchocolate<<" Цена за молоко: "<<Cmilk<<" Цена за кофе: "<<Ccoffe<<" Общий чек: "<<all;
    
    
    
}
