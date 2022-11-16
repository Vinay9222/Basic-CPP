#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void displayManu()
{
    cout << "P - Print Number" << endl;
    cout << "A - Add a Number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest Numer" << endl;
    cout << "L - Display the largest Numer" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

char getChar(){
    char ch {};
    cin>>ch;
    return toupper(ch);
}

void printNumber(vector<int> &arr)
{
    cout << "[ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ]" << endl;
}

void addNumber(vector<int> &arr)
{
    int number = 0;
    cout << "Enter a number : ";
    cin >> number;
    cout << "Adding the "<<number<<" in vector..." << endl;
    arr.push_back(number);
}

void meanNumber(vector<int> &arr)
{
    if(arr.size()==0) cout<<"Unable to calculate"<<endl;
    else {
        int ans =0 ;
        for(auto v : arr){
            ans+=v; 
        }
        cout<<"The mean is :"<<(ans)/(arr.size())<<endl;
    }
}

void findNumber(vector<int> &arr)
{
    int number;
    cout << "Enter a number to find : ";
    cin >> number;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == number)
        {
            cout << number + " was found" << endl;
            return;
        }
    }
    cout << number + " is not Found" << endl;
}

void largeNumber(vector<int> &arr){
    if(arr.size()==0) cout<<"The size is empty().."<<endl;
    else {
        int maxi = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            maxi = max(maxi, arr[i]);
        }
        cout<<"The largest number is: "<<maxi<<endl;
    }
}

void smallNumber(vector<int> &arr){
    if(arr.size()==0) cout<<"The size is empty().."<<endl;
    else {
        int mani = INT_MAX;
        for(int i=0; i<arr.size(); i++){
            mani = min(mani, arr[i]);
        }
        cout<<"The largest number is: "<<mani<<endl;
    }
    
}

void quitNumber(){
     cout<<"Goodbye....."<<endl;
}

int main()
{
    char ch = {};
    vector<int> arr;
    do
    {
        displayManu();
        ch = getChar();
        switch (ch)
        {
        case 'P':
            printNumber(arr);
            break;
        case 'A':
            addNumber(arr);
            break;
        case 'F':
            findNumber(arr);
            break;
        case 'M':
            meanNumber(arr);
            break;
        case 'S':
            smallNumber(arr);
            break;
        case 'L':
            largeNumber(arr);
            break;
        case 'Q':
            quitNumber();
            break;

        default:
            cout << "Plz, Enter a correct character..." << endl;
        }
    } while (ch != 'Q');
    cout << endl;
    return 0;
}