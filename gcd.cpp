#include <iostream>

using namespace std;

int gcd(int,int);

int main(){
    unsigned int t;
    long int a, b;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        cout << gcd(a,b) << endl;
    }
    return 0;
} 

int gcd(int a, int b){

    if(a>=0 && b<=1000000)
    while(a != b){
        if(a > b) a -= b;
        else b -= a; 
    }
    return a;
}