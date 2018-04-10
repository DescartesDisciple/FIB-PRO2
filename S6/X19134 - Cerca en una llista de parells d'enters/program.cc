#include <iostream>
#include "LlistaIOParInt.hh"
using namespace std;

int main() {
    
    list<ParInt> p;
    LlegirLlistaParInt(p);
    
    int n, m = 0, o = 0;
    cin >> n;
    
    list<ParInt>::iterator it = p.begin();
    while (it != p.end())
    {
        ParInt aux;
        aux = *it;
        if (aux.primer() == n)
        {
            ++m;
            o += aux.segon();
        }
        ++it;
    }
    cout << n << ' ' << m << ' ' << o << endl;
}
