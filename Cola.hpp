#ifndef COLA_HPP_INCLUDED
#define COLA_HPP_INCLUDED

template <typename T>
class Cola
{
public:
    Cola();
    ~Cola();

private:
    int tam;
    struct Elemento
    {
        T valor;
        Elemento *siguiente;
        Elemento(T val, Elemento *sig) : valor(val), siguiente(sig) {} // Constructor for Elemento
    };
    Elemento *fondo;
};

#include "Cola.tpp"

#endif // COLA_HPP_INCLUDED
