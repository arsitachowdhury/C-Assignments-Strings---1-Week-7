#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<s<<endl;
    for(int i=0;i<s.size()-1;i++)
    {
        if(i%2!=0)
        {
            s[i]='#';
        }
    }
    cout<<s;
  return 0;
}