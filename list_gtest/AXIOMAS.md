# List implementation in C++ 11

This is for the **object technology** course of the Systems Engineer career of the Universidad Nacional de San Agustin de Arequipa.


# List Abstract Data Type
## Types
```
 - L: LIST
 - E, F: ELEMENT
```
## Signatures
```
 - new     :          -->  LIST
 - append  : LIST x E -->  LIST (agrega un alemento al final de la lista)
 - head    : LIST     -/-> ELEMENT (partial) (devuelve la cabeza de la lista)
 - tail    : LIST     -/-> LIST (partial) (recibe una lista y devuelve una lista, es el resto de la lista, menos la cabeza)
 - size    : LIST     -->  INT
 - isEmpty : LIST     -->  BOOL
 ```
## Axioms
```
 - size(new) == 0
 - size(append(L, E)) > 0
 - size(append(new, E)) == 1
 - empty(new) == True
 - empty(append(L, E)) == False
 - head(new) = error
 - head(append(append(new, E), F)) == E
 - head(append(new, E)) == E 
 - tail(new) = error
 - tail(append(L, E)) == L
 - head(tail(append(append(new, E), F))) == F 
 ```

