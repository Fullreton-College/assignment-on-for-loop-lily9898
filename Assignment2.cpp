#include <iostream>
using namespace std;

int storeSale1, storeSale2, storeSale3, storeSale4, storeSale5;

int main() 
{

cout << "Enter today's sales for store 1: ";
cin >> storeSale1;

cout << "Enter today's sales for store 2: ";
cin >> storeSale2;

cout << "Enter today's sales for store 3: ";
cin >> storeSale3;

cout << "Enter today's sales for store 4: ";
cin >> storeSale4;

cout << "Enter today's sales for store 5: ";
cin >> storeSale5;

cout << "SALES BAR CHART" << endl;
cout << "(Each * = $100)" << endl;

//Store 1:
cout << "Store 1: ";
for (int i = 0; i < storeSale1 / 100; i++)
{
   cout << "*";
}
cout << endl;

//Store 2:
cout << "Store 2: ";
for (int i = 0; i < storeSale2 / 100; i++)
{
   cout << "*";
}
cout << endl;

//Store 3:
cout << "Store 3: ";
for (int i = 0; i < storeSale3 / 100; i++)
{
   cout << "*";
}
cout << endl;

//Store 4:
cout << "Store 4: ";
for (int i = 0; i < storeSale4 / 100; i++)
{
   cout << "*";
}
cout << endl;

//Store 5:
cout << "Store 5: ";
for (int i = 0; i < storeSale5 / 100; i++)
{
   cout << "*";
}
cout << endl;

   return 0;
}
