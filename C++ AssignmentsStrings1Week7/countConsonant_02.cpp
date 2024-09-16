#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<s<<endl; // priyanka --->5
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]!='a' && s[i]!='A')&&(s[i]!='e' && s[i]!='E')&&(s[i]!='i' && s[i]!='I')&&(s[i]!='o' && s[i]!='O')&&(s[i]!='u' && s[i]!='U'))
        count++;
    }
   cout<<count;
   return 0;
}