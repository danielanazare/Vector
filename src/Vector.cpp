#include "Vector.h"
#include <typeinfo>

///default constructor
template <class T, unsigned int S> Vector<T, S>::Vector()
{
        for(unsigned int i = 0; i < S; i++)
            vector_pointer[i] = 0;
}

///constructor - a given value
template <class T, unsigned int S> Vector<T, S>::Vector(T value)
{
        for(unsigned int i = 0; i < S; i++)
            vector_pointer[i] = value;
}

///destrcutor
template <class T, unsigned int S > Vector<T, S>::~Vector()
{
    delete[] vector_pointer;
}

///copy constructor
template<class T, unsigned int S>
Vector<T, S>::Vector(const Vector &V)
{
    Copy(V);
}

template <class T, unsigned int S>
Vector<T, S>& Vector<T, S>::Copy(const Vector &V)
{
    for(unsigned int i = 0; i < S; i++)
        vector_pointer[i] = V.vector_pointer[i];
    return *this;
}


///return value from i position
template <class T, unsigned int S>
T& Vector<T, S>::operator [] (int i)
{
    return vector_pointer[i];
}

///return vector size
template <class T, unsigned int S>
unsigned int Vector<T, S>::getSize()
{
    return S;
}


///declare type of vectors to be used in main.cpp
template class Vector<int, 4 >;
template class Vector<int, 10>;
