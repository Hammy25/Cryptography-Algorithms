#include <iostream>
using namespace std; 
 
int modular_pow(int base, int exponent, int modulus){
    int result = 1;
    while (exponent > 0){
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main(){
    int x, y;
    int mod;
    cout<<"((BaseValue)^(Exponent)) mod ModularValue"<<endl;
    cout<<"Enter Base Value: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    cout<<"Enter Modular Value: ";
    cin>>mod;
    cout<<modular_pow(x, y , mod);
    cout<<endl;
    return 0;
}