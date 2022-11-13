#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<arr[3];
    cout<<arr[4]<<endl;
    cout<<arr<<endl;// showing the address of the array
    cout<<&arr[1]<<endl;//showing the first address of the array
	return 0;
}