#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
  //  int x = stoi(s);
  int num=0;
  bool check=0;
   for(int i=0;i<s.size();i++)
   { 
    if(i==0 && s[0]=='-')
    {
      check=1;
      continue;
    }
    else{
     num *=10;
     num +=(s[i]-48);
    }
   }
   if(check==1)
   cout<<-num;
   else
   cout<<num;
    return 0;
}