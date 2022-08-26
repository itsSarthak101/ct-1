// Name: Sarthak Sharma
// Rollno: 2010991395
// SNo.: 4
// Question: 1
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

void getRepeat(int array[], int n)
{
    int Flag = -1;
    unordered_set<int> SET;
    for (int i=n-1; i>=0; i--)
    {
        if(SET.find(array[i]) != SET.end())
            Flag=i;
        else
            SET.insert(array[i]);
    }
    int size = *(&array + 1) - array;
    if(Flag!= -1)
        cout <<"The first repeating element is "<<size;
    else
        cout <<"There are no repeating elements";
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    for(int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    cout<<" "<<endl;
    int s = sizeof(array) / sizeof(array[0]);
    getRepeat(array, s);
}