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