#include "iostream"
using namespace std;
 
int main()
{

int Number;
cout <<"введите четырехзначное число";
cin>>Number;
cout << "Дано целое число: " << mainNumber << endl;
cout << "Число наизнанку: "; 
cout << mainNumber % 10;
Number /= 10; 
cout << mainNumber % 10; 
Number /= 10;
cout << mainNumber % 10;
Number /= 10;
cout << mainNumber % 10;
Number /= 10;
cout << endl << endl;

return 0;
}