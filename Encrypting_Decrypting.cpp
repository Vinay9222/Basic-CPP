#include <iostream>
#include<string>
using namespace std;
int main()
{
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMONPQRSTUVWXYZ"};
        string key {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
        
        cout<<"Enter a message : ";
        string ans{};
        getline(cin,ans); //for the space also
        
        cout<<"Encrypting message : "<<endl<<endl;
        
        string encrypting {};
        
        for(char ch:ans){ // tracking all in range
            size_t position = alphabet.find(ch); // finding the character in the alphabet
            if(position != string::npos){ // we don't get the character in string
                char new_char {key.at(position)};
                encrypting+=new_char;
            }else{
                encrypting+=ch;
            }
        }
        
        cout<<encrypting<<endl;
        
        return 0;
}
