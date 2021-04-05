#include<iostream>
#include <cmath>
using namespace std;

bool prime(unsigned long long int x){

    for(unsigned long long int i = 2;i <= sqrt(x);i++){
        if(x % i == 0){
            return false;
        }
    }


    return true;
}

int main(){

    unsigned long long int num;
    cout << "Please enter a number and this program will display all the prime number below it:" << endl;
    cin >> num;

    for(unsigned long long int x = num;x > 1;x--){
        if(prime(x)){
            cout << x << endl;
        }
    }

    return 0;
}