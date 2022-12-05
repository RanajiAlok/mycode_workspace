#include <bits/stdc++.h>
using namespace std;
        
class Solution {
public:
    bool isLeapYear(int year){
        
        if((year%400)==0||(year%4==0 && year%100 != 0))
        return true;
        else
        return false;
    }

    int dayOfYear(string date) {
      int year= stoi(date.substr(0,4));
      int month= stoi(date.substr(5,2));
      int day=stoi(date.substr(8,2));

      int arr1[12]={0,31,28,31,30,31,30,31,31,30,31,30};
      int arr2[12]={0,31,29,31,30,31,30,31,31,30,31,30};
      
      if(isLeapYear(year)){
        for(int i=0;i<month;i++){
            day+=arr2[i];
        }
      }
      else{
        for(int i=0;i<month;i++){
            day+=arr1[i];
        }
      }
      return day;
      
    }
};

int main(){
    string date;
    cout<<"enter the Date: "<<endl;
    cin>>date;
    cout<<date<<endl;
    Solution s1;
    cout<<s1.dayOfYear(date)<<endl;
}
