#include <iostream>
using namespace std;

int main() {
      
  int n;
  cout<<"enter a number to check wether it's a prime number or not"<<endl;
  cin>>n;


  bool isPrime=true;
  
  for (int i =2 ;i*i<=n ;i++){
    if (n%i==0){
      isPrime=false;
      break;

    }
  }

 if (isPrime==true) 
 {
  
  cout<<"prime number";

 } else {

  cout<<"non prime number";
 }

    return 0;
}