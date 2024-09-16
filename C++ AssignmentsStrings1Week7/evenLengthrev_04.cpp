#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : "; // priy anka
    getline(cin,s);
    int len=s.length();
    if(len%2!=0)
    {
       cout<<"Enter an even number of string" ;
    }
    else{
        reverse(s.begin()+len/2,s.end());
        cout<<s;
    }
    return 0;
}
