#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s1,int start,int end){
    if(start==end)
    return true;

    if(s1[start]!=s1[end])
    return false;

    if (start < end + 1)
    return checkPalindrome(s1, start + 1, end - 1);

    return true;
}

int main(){
    string s1;
    cout<<"Enter the string to check for palindrome"<<endl;
    cin>>s1;
    int n = s1.length();

    if(checkPalindrome(s1, 0, n - 1))
    cout<<"yes"<<endl;
    else
    cout<<"no";
}
