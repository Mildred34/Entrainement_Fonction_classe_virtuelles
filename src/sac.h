/*
 * sac.h
 *
 *  Created on: 28 oct. 2018
 *      Author: Alexis
 */

#ifndef SAC_H_
#define SAC_H_
#include "object.h"
#include <iostream>

using namespace std;

class Bag : public Object       // La classe sac. Elle hérite
                                // de Object, car un sac peut
                                // en contenir un autre. Le sac
                                // est implémenté sous la forme
                                // d'une liste chaînée.
{
    struct BagList
    {
        BagList *next;
        Object  *ptr;
    };

    BagList *head;               // La tête de liste.

public:
    Bag(void);        // Le constructeur : appel celui de Object.
    ~Bag(void);       // Le destructeur.
    void print(void); // Fonction d'affichage du sac.
    bool has(unsigned long int) const;
                      // true si le sac contient l'objet.
    bool is_empty(void) const;   // true si le sac est vide.
    void add(Object &);          // Ajoute un objet.
    void remove(Object &);       // Retire un objet.
};



#endif /* SAC_H_ */
