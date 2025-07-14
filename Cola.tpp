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