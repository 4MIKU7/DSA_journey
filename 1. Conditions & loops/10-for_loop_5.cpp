// usage of continue & break

#include<iostream>
using namespace std;

int res(int x) 
{   int c=0;
    for(int i=1; i<=x; i++)
    {
        cout << "Hi StHrt !" <<endl;
        cout << "Kemiti achha ? " <<endl;
        //continue ; // i.e. continue don't go further , it goes directly to the updation part
        //break;  // i.e. break , takes u out of the loop
        cout << "I LOve You " <<endl;

    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    res(n);
    return 0;
}