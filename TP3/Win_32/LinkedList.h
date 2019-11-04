/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
/** \brief reserve espacio de memoria, (un malloc en memoria)
 *
 * \param void
 * \return LinkedList*
 *
 */
LinkedList* ll_newLinkedList(void);

/** \brief cuenta la cantidad (estructuras) de los elementos dentro de la lista
 *
 * \param this LinkedList*
 * \return int
 *
 */
int ll_len(LinkedList* this);

Node* test_getNode(LinkedList* this, int nodeIndex);
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);

/** \brief agrega un elemento
 *
 * \param this LinkedList* la lista que estoy trabajando
 * \param pElement void* cualquier tipo de dato
 * \return int
 *
 */
int ll_add(LinkedList* this, void* pElement);

/** \brief me dice cual es el objeto en el indice ingresado
 *
 * \param this LinkedList* una lista
 * \param index int indice
 * \return void*
 *
 */
void* ll_get(LinkedList* this, int index);

/** \brief reemplaza un elemento con otro nuevo
 *
 * \param this LinkedList*
 * \param index int
 * \param pElement void*
 * \return int
 *
 */
int ll_set(LinkedList* this, int index,void* pElement);

/** \brief saca el elemento marcado por el indice
 *
 * \param this LinkedList*
 * \param index int
 * \return int
 *
 */
int ll_remove(LinkedList* this,int index);

/** \brief borra los elementos de la lista
 *
 * \param this LinkedList*
 * \return int
 *
 */
int ll_clear(LinkedList* this);

/** \brief borra la lista de memoria
 *
 * \param this LinkedList*
 * \return int
 *
 */
int ll_deleteLinkedList(LinkedList* this);

/** \brief me dice el indice del elemento de la lista
 *
 * \param this LinkedList*
 * \param pElement void*
 * \return int
 *
 */
int ll_indexOf(LinkedList* this, void* pElement);

/** \brief me indica si hay algo en algun lugar de la lista
 *
 * \param this LinkedList*
 * \return int
 *
 */
int ll_isEmpty(LinkedList* this);

/** \brief corre un elemento de lugar para poner otro en medio
 *
 * \param this LinkedList*
 * \param index int
 * \param pElement void*
 * \return int
 *
 */
int ll_push(LinkedList* this, int index, void* pElement);

/** \brief saca un elemento de una lista lo conserva y lo manda a otra
 *
 * \param this LinkedList*
 * \param index int
 * \return void*
 *
 */
void* ll_pop(LinkedList* this,int index);

/** \brief me pasa un elemento y me dice que lista tiene ese elemento
 *
 * \param this LinkedList*
 * \param pElement void*
 * \return int
 *
 */
int ll_contains(LinkedList* this, void* pElement);

/** \brief me pasa 2 listas y me indica cual es sublista
 *
 * \param this LinkedList*
 * \param this2 LinkedList*
 * \return int
 *
 */
int ll_containsAll(LinkedList* this,LinkedList* this2);

/** \brief crea una sublista
 *
 * \param this LinkedList*
 * \param from int
 * \param to int
 * \return LinkedList*
 *
 */
LinkedList* ll_subList(LinkedList* this,int from,int to);

/** \brief crea una copia identica de una liste (pero es concidera otra)
 *
 * \param this LinkedList*
 * \return LinkedList*
 *
 */
LinkedList* ll_clone(LinkedList* this);

/** \brief ordena
 *
 * \param void*
 * \param void*
 * \return int ll_sort(LinkedList* this, int
 *
 */
int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order);
