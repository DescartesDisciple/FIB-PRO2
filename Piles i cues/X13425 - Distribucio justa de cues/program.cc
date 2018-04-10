#include <iostream>
#include "CuaIOParInt.hh"
#include "ParInt.hh"
using namespace std;

int main(){

    queue<ParInt> c;

    llegirCuaParInt(c);
    
    queue<ParInt> ca;
    queue<ParInt> cb;
    
    int temps_a = 0;
    int temps_b = 0;
    
    while (not c.empty()){
        
        if(temps_a <= temps_b){
            
            ca.push(c.front());
            temps_a += c.front().segon();
        
        }
        else{
            
            cb.push(c.front());
            temps_b += c.front().segon();
        
        }
        c.pop();
    }
    

    escriureCuaParInt(ca);
    cout << endl;
    escriureCuaParInt(cb);

}
