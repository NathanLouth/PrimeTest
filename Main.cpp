#include<iostream>
#include <cmath>
#include <time.h>
using namespace std;

bool prime(unsigned long long int x){

    if(x == 2){
        return true;
    }

    if((x%2==0)){
        return false;
    }

    for(unsigned long long int i = 2;i <= sqrt(x);i++){
        if(x % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    clock_t tStart = clock();

    unsigned long long int num;
    unsigned long long int count = 0;

    cout << "Please enter a number and this program will display all the prime number below it:" << endl;
    cin >> num;
    cout << "Prime numbers.." <<endl;

    for(unsigned long long int x = num;x > 1;x--){
        if(prime(x)){
            cout << x << endl;
            count++;

        }
    }

    cout << endl << num << " Has " << count << " Prime numbers below it." << endl; 

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
}