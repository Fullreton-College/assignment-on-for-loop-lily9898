#include <iostream>
#include <iomanip>

using namespace std;

int firstNum, secondNum;

int main()
{

cout << "Input first integer: ";
cin >> firstNum;

cout << "Input second integer: ";
cin >> secondNum;

if (secondNum < firstNum )
{
    cout << "Second integer can't be less than the first.";
}

else
{
    for (int i = firstNum; i <= secondNum; i += 5)
    {
        cout << i << " ";  
    }
}

cout << endl;

return 0;
}
