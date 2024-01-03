#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool feast(const char* beast, const char* dish, const char* premiereLettreb, const char* premiereLettred, const char* derniereLettreb, const char* derniereLettred) 
{   
    size_t longueurb = strlen(beast);
    size_t longueurd = strlen(dish);
  
    premiereLettreb = beast;
    premiereLettred = dish;
    derniereLettreb = beast + longueurb - 1;
    derniereLettred = dish + longueurd - 1;
  
    if (*derniereLettreb == *derniereLettred && *premiereLettreb == *premiereLettred)
    {
        return true; 
    } 
    if (*derniereLettreb != *derniereLettred && *premiereLettreb != *premiereLettred)
    {
        return false; 
    }

    return false;
}
