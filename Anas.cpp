#include <iostream>
#include <fstream>
using namespace std;

void inputArray(int arr[], int size) 
{
    cout<<'\n'<<"Enter "<<size<<" Integers: "<<'\n';
    for (int i=0; i<size; i++) 
    {
        cin>>arr[i];
    }
}

void displayArray(const int arr[], int size) 
{
    cout<<"Array Elements: ";
    for (int i=0; i<size; i++) 
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int calculateSum(const int arr[], int size) 
{
    int sum = 0;
    for (int i=0; i<size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

void writeToFile(const int arr[], int size) 
{
    ofstream file("integerData.txt");

    for (int i=0; i<size; i++) 
    {
        file<<arr[i]<<" ";
    }

    file.close();
}

void readFromFile(int arr[], int size) 
{
    ifstream file("integerData.txt");

    for (int i=0; i<size; i++) 
    {
        file>>arr[i];
    }

    file.close();
}

int main() 
{
    cout<<"====================================="<<'\n';
    cout<<"  Learn To Handle File Read & Write"<<'\n';
    cout<<"====================================="<<'\n';

    const int SIZE = 10;
    int arr[SIZE];
    int choice;

    do 
    {
    cout<<'\n';
    cout<<"1. Input Array"<<'\n';
    cout<<"2. Display Array"<<'\n';
    cout<<"3. Calculate Sum"<<'\n';
    cout<<"4. Write To File"<<'\n';
    cout<<"5. Read From File"<<'\n';
    cout<<"0. Exit"<<'\n';
    cout<<"Enter Choice: ";
    cin>>choice;

        switch (choice) 
        {
            case 1:
                inputArray(arr, SIZE);
                break;

            case 2:
            	cout<<'\n';
                displayArray(arr, SIZE);
                break;

            case 3:
                cout<<'\n'<<"Sum: "<<calculateSum(arr, SIZE)<<'\n';
                break;

            case 4:
                writeToFile(arr, SIZE);
                cout<<'\n'<<"Data Written To File."<<'\n';
                break;

            case 5:
                readFromFile(arr, SIZE);
                cout<<'\n'<<"Data Read From File."<<'\n'<<'\n';
                displayArray(arr, SIZE);
                break;

            case 0:
                cout<<'\n'<<"Exiting Program..."<<'\n';
                break;

            default:
                cout<<"Invalid Choice!"<<'\n';
        }

    } while (choice != 0);

    cout<<'\n'<<"================================="<<'\n';
    cout<<"       Program Terminated"<<'\n';
    cout<<"================================="<<'\n';

    return 0;
}