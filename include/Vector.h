#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

using std::ostream;

template <class T, unsigned int S>
class Vector
{
    T vector_pointer[S];

public:
    Vector();
    Vector(T);
    Vector(const Vector &);
    ~Vector();

    Vector<T, S>& Copy(const Vector& V);

    T &operator [] (int);


    Vector<T, S> operator= (const Vector<T, S>& lhs)
    {
       if(this != &lhs)
        Copy(lhs);
       return *this;
    }

    friend Vector<T, S> operator+ (const Vector<T, S>& lhs, const Vector<T, S>& rhs)
    {
        Vector<T, S> aux;
        for(unsigned int i = 0; i < S; i++)
            aux.vector_pointer[i] = lhs.vector_pointer[i] + rhs.vector_pointer[i];

        return aux;
    }
    friend Vector<T, S> operator- (const Vector<T, S>& lhs, const Vector<T, S>& rhs)
    {
        Vector<T, S> aux;
        for(unsigned int i = 0; i < S; i++)
            aux.vector_pointer[i] = lhs.vector_pointer[i] - rhs.vector_pointer[i];

        return aux;
    }
    friend Vector<T, S> operator* (const T& scalar, Vector<T, S>& rhs)
    {
        for(unsigned int i = 0; i < S; i++)
            rhs.vector_pointer[i] = rhs.vector_pointer[i] * scalar;

        return rhs;
    }
    friend T operator* (const Vector<T, S>& lhs, const Vector<T, S>& rhs)
    {
        T aux = 0;
        for(unsigned int i = 0; i < S; i++)
            aux += (lhs.vector_pointer[i] * rhs.vector_pointer[i]);

        return aux;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector& v)
    {
        os << "(";
        for(unsigned int i = 0; i < S-1; i++)
            os << v.vector_pointer[i] << ", ";
        os << v.vector_pointer[S-1];
        os << ")" << std::endl;
        return os;
    }
    unsigned int getSize();

};

#endif // VECTOR_H
