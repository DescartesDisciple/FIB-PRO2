#include "LlistaIOEstudiant.hh"

void LlegirLlistaEstudiant(list<Estudiant>& l)
{
// Pre: l és buida; el canal estandar d’entrada conté parelles
// de valors <enter, double>, acabat per un parell 0 0
// Post: s’han afegit al final de l els estudiants llegits fins al 0 0 (no inclòs)
    
    list<Estudiant>::iterator it = l.begin();
    int a;
    double b;
    while (cin >> a >> b and (a != 0 and b != 0))
    {   
        Estudiant e (a);
        e.afegir_nota(b);
        l.insert(it,e);
    }
}
void EscriureLlistaEstudiant(list<Estudiant>& l)
{
// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de l
   
    list<Estudiant>::iterator it = l.begin();
    
    while (it != l.end())
    {
        Estudiant e;
        e = *it;
        e.escriure();
        ++it;
    }
}
