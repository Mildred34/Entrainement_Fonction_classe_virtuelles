/*
 * sac.cpp
 *
 *  Created on: 28 oct. 2018
 *      Author: Alexis
 */
#include <iostream>

using namespace std;
#include "sac.h"
#include "object.h"

Bag::Bag(void) : Object()
{
    return;  // Ne fait rien d'autre qu'appeler Object::Object().
}

Bag::~Bag(void)
{
    BagList *tmp = head;   // Détruit la liste d'objet.
    while (tmp != NULL)
    {
        tmp = tmp->next;
        delete head;
        head = tmp;
    }
    return;
}

void Bag::print(void)
{
    BagList *tmp = head;
    cout << "Sac n° " << handle() << "." << endl;
    cout << "    Contenu :" << endl;

    while (tmp != NULL)
    {
        cout << "\t";        // Indente la sortie des objets.
        tmp->ptr->print();   // Affiche la liste objets.
        tmp = tmp->next;
    }
    return;
}

bool Bag::has(unsigned long int h) const
{
    BagList *tmp = head;
    while (tmp != NULL && tmp->ptr->handle() != h)
        tmp = tmp->next;     // Cherche l'objet.
    return (tmp != NULL);
}

bool Bag::is_empty(void) const
{
    return (head==NULL);
}

void Bag::add(Object &o)
{
    BagList *tmp = new BagList;   // Ajoute un objet à la liste.
    tmp->ptr = &o;
    tmp->next = head;
    head = tmp;
    return;
}

void Bag::remove(Object &o)
{
    BagList *tmp1 = head, *tmp2 = NULL;
    while (tmp1 != NULL && tmp1->ptr->handle() != o.handle())
    {
        tmp2 = tmp1;        // Cherche l'objet...
        tmp1 = tmp1->next;
    }
    if (tmp1!=NULL)         // et le supprime de la liste.
    {
        if (tmp2!=NULL) tmp2->next = tmp1->next;
        else head = tmp1->next;
        delete tmp1;
    }
    return;
}




