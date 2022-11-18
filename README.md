## INGENIERÍA DE SISTEMAS - UNSA
### TECNOLOGÍA DE OBJETOS
#### docente: Alfredo Paz Valderrama
#### presentado por : Nohelia Etsefhania Tacca Apaza



###### newStack:                 --------> STACK
###### push    : STACK x INTEGER --------> STACK
###### pop     : STACK           --------> STACK
###### top     : STACK           --------> INTEGER u {undefined}
###### empty   : STACK           --------> BOOLEAN

##### axioms:
###### pop(newstack) = newstack                
###### pop(push(S, I)) = S                     
###### top(newstack) = undefined               
###### top(push(S, I)) = I                     
###### empty(newstack) = true                  
###### empty(push(S, I)) = false               
###### empty(pop(push(newstack, I))) = true    

