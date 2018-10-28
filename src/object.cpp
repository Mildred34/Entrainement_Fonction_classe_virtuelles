/*
 * object.cpp
 *
 *  Created on: 28 oct. 2018
 *      Author: Alexis
 */
#include <iostream>

using namespace std;
#include "object.h"

unsigned long int Object::new_handle(void)
{
    static unsigned long int hc = 0;
    return hc = hc + 1;          // hc est l'identifiant courant.
                                 // Il est incr�ment�
}                                // � chaque appel de new_handle.

// Le constructeur de Object doit �tre appel� par les classes d�riv�es :

Object::Object(void)
{
    h = new_handle();            // Trouve un nouvel identifiant.
    return;
}

Object::~Object(void)
{
    return ;
}

unsigned long int Object::handle(void) const
{
    return h;                    // Renvoie le num�ro de l'objet.
}




