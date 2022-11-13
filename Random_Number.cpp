#include <iostream>
#include<cstdlib> // required for rand()
#include<ctime> // required for time()

using namespace std;

int main()
{
    int max{6};
    int min{1};
    
    cout<<"RAND_MAX  on my system is: " <<RAND_MAX<<endl;
    srand(time(nullptr)); // new random numbers creating seeding the random number generater
    
    for(size_t i{0}; i<=10; i++){
        cout<<rand()%max+min<<endl;  //rand() generate a random number 
    }
    
    return 0;
}