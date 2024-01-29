
#include <iostream>
#include <string>


using namespace std;

void FindOddNumbers(int Limit, bool IsOdd) 
{
    for (int i = int(IsOdd) + 1; i <= Limit; i += 2)
        std::cout << i << "\n";
}

int main()
{
    int num;
    bool Odd;
    cout << "Are you looking for? Odd(y/n):";
    string yes; 
    cin >> yes;
    Odd = (yes == "y");
    cout << "Enter the limit:";
    cin >> num;
    FindOddNumbers(num,Odd);
   
   
    
}