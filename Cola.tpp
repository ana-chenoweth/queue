#include <iostream>
#include "Cola.hpp"

//**********************************************
template <typename T>
Cola<T>::Cola() : tam(0), fondo(nullptr)
{
}
//**********************************************
template <typename T>
Cola<T>::~Cola()
{
    Vaciar();
}
//***********************************************
template <typename T>
Cola<T>::Cola(const Cola &c) : tam(0), fondo(nullptr)
{
    *this = c;
}
//*********************************************
template <typename T>
Cola<T> &Cola<T>::operator=(const Cola &c)
{
    if (this == &c)
        return *this;
    Vaciar();
    Elemento *actual = c.fondo->siguiente;
    while (actual != fondo)
    {
        Agregar(actual->valor);
        actual = actual->siguiente;
    }
    return *this;
}
//***********************************************
template <typename T>
void Cola<T>::Agregar(T valor)
{
    Elemento *nuevo = new Elemento(valor, EstaVacia() ? nullptr : fondo->siguiente);
    (EstaVacia()? nuevo->siguiente: fondo->siguiente) = nuevo;
   fondo = nuevo;
    ++tam;
}
//***********************************************
template <typename T>
void Cola<T>::Eliminar()
{
    if (EstaVacia())
        throw "La cola esta vacia";

    Elemento *temp = fondo->siguiente;
    fondo->siguiente = fondo->siguiente->siguiente;
    delete temp;
    if (fondo->siguiente == nullptr)
        fondo = nullptr;
    --tam;
}
//**********************************************
template <typename T>
int Cola<T>::ObtenerTam() const
{
    return tam;
}
//**********************************************
template <typename T>
T Cola<T>::ObtenerFondo() const
{
    if (EstaVacia())
        throw "La cola esta vacia";
    return fondo->valor;
}
//**********************************************
template <typename T>
T Cola<T>::ObtenerFrente() const
{
    if (EstaVacia())
        throw "La cola esta vacia";
    return fondo->siguiente->valor;
}
