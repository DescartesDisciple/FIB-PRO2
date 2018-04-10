#include "BinTreeIOParInt.hh"

void read_bintree_parint(BinTree<ParInt>& a){
// Pre: a és buit; el canal estandar d’entrada conté un nombre
// parell d’enters, que representa un arbre binari en preordre,
// on el parell 0 0 representa un arbre buit
// Post: a conté l’arbre que hi havia al canal estandar d’entrada

    ParInt p;
    
    if (p.llegir())
    {
        BinTree<ParInt> a1;
        BinTree<ParInt> a2;
        read_bintree_parint(a1);
        read_bintree_parint(a2);
        a = BinTree<ParInt> (p, a1, a2);
    }
    else
    {
        a = p;
    }
}
void write_bintree_parint(const BinTree<ParInt>& a){
// Pre: a = A
// Post: s’han escrit al canal estandar de sortida els elements
// d’a recorrreguts en inordre, a = A
    
    if (not a.empty())
    {
       
        BinTree<ParInt> a1 = a.left();
        BinTree<ParInt> a2 = a.right();
        write_bintree_parint(a1);
        a.value().escriure(); // si se pone antes de los write... escribe en preorden.
        write_bintree_parint(a2);
    }
}



