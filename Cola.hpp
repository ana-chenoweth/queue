#ifndef COLA_HPP_INCLUDED
#define COLA_HPP_INCLUDED

template <typename T>
class Cola
{
public:
    Cola();
    ~Cola();
    Cola(const Cola<T> &c);
    Cola<T> &operator=(const Cola &c);
    void Agregar(T valor);
    void Eliminar();
    int ObtenerTam() const;
    T ObtenerFondo() const;
    T ObtenerFrente() const;
    bool EstaVacia() const;
    void Vaciar();
    void Imprimir() const;

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
