#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"enter the size of an array";
    cin>>size;
    int arr[size];
    for (int i=0; i <size; i++)
    {
        int value;
        cout<<"enter a value to store in array";
        cin>>value;
        cout<<value;
        arr[size] = {value};
        cout<<value;
    }
    
    return 0;
}
