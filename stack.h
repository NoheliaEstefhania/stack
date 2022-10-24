#ifndef STACK_H
#define STACK_H
template<typename T>
class Stack{
  public:
    virtual void push(T) = 0; //el igual a cero significa que no hay implementación, las subclases son las que implementarán
    virtual void pop() = 0;
    virtual T top() = 0;
    virtual bool empty() = 0;
};
#endif

//esta clase es una clase abstracta donde todos sus métodos son virtuales puros, por lo tanto debemos de inicializarlos,con =0 estot diciendo que ese método no tendrá ninguna implementación. Las subclases son las que tienen que implementar eso, por lo tanto haremos una subclase de stack para las implementaciones.
//virtual es necesario porque se supone que esto lo han implementado las subclases, no s epodrían redefinir.
