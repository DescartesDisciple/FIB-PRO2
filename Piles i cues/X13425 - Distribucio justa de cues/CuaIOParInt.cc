#include "CuaIOParInt.hh"

void llegirCuaParInt(queue<ParInt>& c){
// Pre: c és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han encuat a c els elements llegits fins al 0 0 (no inclòs)
    
    int a,b;
    while (cin >> a >> b and a != 0 and b != 0){
        
        ParInt PI(a, b);
        c.push(PI);
        
    }
    
}

void escriureCuaParInt(queue<ParInt> c){
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de c
    
    while (not c.empty()){
        
        c.front().escriure();
        c.pop();
    }
}

