//============================================================================
// Name        : Classe.cpp
// Author      : Alexis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "sac.h"
#include "object.h"

int main(void)
{	Bag Monsac;
    /*MonObjet a, b, c;    // Effectue quelques op�rations
                         // avec le sac :*/
    MonSac.add(a);
    MonSac.add(b);
    MonSac.add(c);
    MonSac.print();
    MonSac.remove(b);
    MonSac.add(MonSac);  // Un sac peut contenir un sac !
    MonSac.print();      // Attention ! Cet appel est r�cursif !
                         // (plantage assur�).
    return 0;
}
