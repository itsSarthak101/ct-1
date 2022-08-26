// Name: Sarthak Sharma
// Rollno: 2010991395
// SNo.: 4
// Question: 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
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

    sort(array, array+n);
    for(int i=0; i<n; i++) {
        if(array[i]!=array[i-1]+1)
        {
            cout<<"true";
        }
        else cout<<"false";
    }


    return 0;
}