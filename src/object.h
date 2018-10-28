/*
 * object.h
 *
 *  Created on: 28 oct. 2018
 *      Author: Alexis
 */

#ifndef OBJECT_H_
#define OBJECT_H_
#include <iostream>

using namespace std;

class Object
{
    unsigned long int new_handle(void);

protected:
    unsigned long int h;         // Identifiant de l'objet.

public:
    Object(void);                // Le constructeur.
    virtual ~Object(void);       // Le destructeur virtuel.
    virtual void print(void) =0; // Fonction virtuelle pure.
    unsigned long int handle(void) const;  // Fonction renvoyant
                                 // le numéro d'identification
                                 // de l'objet.
};



#endif /* OBJECT_H_ */
