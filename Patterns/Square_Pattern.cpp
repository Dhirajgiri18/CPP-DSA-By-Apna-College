#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter your No of rows: ";
    cin>>row;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}