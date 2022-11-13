#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vector1;//declearing a vector
    vector<int>vector2;
    
    vector1.push_back(10);//adding the vector using push_back
    vector1.push_back(20);
    
    cout<<vector1.at(0)<<endl;//accessing the index
    cout<<vector1.at(1)<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout<<vector2.at(0)<<endl;//accessing the index
    cout<<vector2.at(1)<<endl;
    
    vector<vector<int>>vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout<<vector_2d[0][0]<<" ";
    cout<<vector_2d[0][1]<<endl;
    cout<<vector_2d[1][0]<<" ";
    cout<<vector_2d[1][1]<<endl;

    vector1.at(0) = 1000;
    
    
    cout<<vector_2d[0][0]<<" ";
    cout<<vector_2d[0][1]<<endl;
    cout<<vector_2d[1][0]<<" ";
    cout<<vector_2d[1][1]<<endl;
    
    return 0;
}