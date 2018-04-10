#include "LlistaIOEstudiant.hh"

int main(){
    
    list<Estudiant> le;
    LlegirLlistaEstudiant(le);
    int n, count = 0;
    cin >> n;
    cout << n << ' ';
    
    list<Estudiant>::iterator it = le.begin();
    while (it != le.end())
    {
        Estudiant e;
        e =  *it;
        if (e.consultar_DNI() == n) ++count;
        ++it;
    }
    cout << count << endl;
}
