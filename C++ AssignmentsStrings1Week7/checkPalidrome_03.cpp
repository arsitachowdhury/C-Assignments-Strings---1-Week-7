#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string s1=s;
   // cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    if(s1==s)
    cout<<"Palidrome";
    else
    cout<<"Not a Palidrome";
    return 0;
}