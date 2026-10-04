#include<iostream>
using namespace std;
int  count_digit(int a){
    int last_digit;
   int  count=0;
  while(a>0){
    last_digit=a%10;
    count++;
    a=a/10;
  }
    return count;
}
int main(){
  int n;
    cout<<"Enter a number  n :";
    cin>>n;
  cout<<"The digit of this number is "<<count_digit(n);
    return 0;
}
