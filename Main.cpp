#include<iostream>
#include <cmath>
#include <time.h>
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
    unsigned long long int count = 0;
    string exit;

    cout << "Please enter a number and this program will display all the prime number below it:" << endl;
    cin >> num;
    
    clock_t tStart = clock();
    
    cout << "Prime numbers.." <<endl;

    for(unsigned long long int x = num;x > 1;x--){
        if(prime(x)){
            cout << x << endl;
            count++;

        }
    }

    cout << endl << num << " Has " << count << " Prime numbers below it." << endl; 

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    cin >> exit;

    return 0;
}
