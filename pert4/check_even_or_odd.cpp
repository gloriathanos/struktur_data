#include <iostream>
using namespace std;

bool isEven(int n){
    return (n % 2 == 0);
}

int main() {
    int n = 12;

    if(isEven(n)){
        cout<< true << endl;
    }else{
        cout<< false << endl;
    }
    return 0;
}