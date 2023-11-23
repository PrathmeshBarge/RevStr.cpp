#include<iostream>
#include<string>
using namespace std;

void reversestr(string&str)
{
int n=str.length();
for(int i=0;i<n/2;i++)
{
char temp=str[i];
str[i]=str[n-i-1];
str[n-i-1]=temp;
}
}

int main()
{
string str1="byteboard";
string str2 ="x";

reversestr(str1);
reversestr(str2);

cout<<str1<<endl;
cout<<str2<<endl;

 return 0;
}
