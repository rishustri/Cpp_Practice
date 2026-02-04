//Program to check wether a number is prime number or not//
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number:";
cin >> n;
bool isPrime = true;
if (n<=1) isPrime = false;
for(int i=2; i<= n/2; i++){
    if(n % i==0){
        isPrime = false;
        break;
    }
}
if (isPrime) cout<< "Prime";
else cout<< "Not Prime";
return 0;
}
