#include "BinTreeIOParInt.hh"

bool hi_es(const BinTree<ParInt>& a, int n, int p)
{
    bool trobat;
    
    if (a.empty()) trobat = false;
    else if (a.value().primer() == n)
    {
        trobat = true;
        cout << a.value().primer() << ' ' << a.value().segon() << ' ' << p << endl;
    }
    else
    {
        ++p;
        trobat = hi_es(a.left(), n, p);
        if (not trobat) trobat = hi_es(a.right(), n, p);
    }
    return trobat;
}


int main() {
    
    BinTree<ParInt> bt;
    int n, prof = 0;
    bool b;
    read_bintree_parint(bt);
    while (cin >> n)
    {
        b = hi_es(bt, n, prof);
        if (not b) cout << "-1" << endl;
    }

}
