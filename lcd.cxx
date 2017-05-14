#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout<<"What numbers would you like to test? ";
    cin>>x;
    cout<<"And? ";
    cin>>y;
    int i;
    int j;

    for (i=2; i<=x && i<=y; i++){
        if (x%i==0 && y%i == 0){
            cout<<"The least common denominator is: "<<i<<endl;
            break;
        }
        }
    }
