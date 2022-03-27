//Afham Bashir 10.16.20
#pragma once

#include <cstdlib>
#include <iostream>
#include <list>
#include <string>
using namespace std; 


template <typename Object>
void printLots (const std::list<Object>& L, const std::list<int>& P){
  for(list<int>::const_iterator itr = P.begin() ; itr != P.end( ); ++itr ){  
         // for loop that declares an constant iterator to transverse List P. 
    if( *itr >= 0 && *itr < L.size()){  // if the value of the iterator is with in the bounds of list P 
         int counter = 0;   // declares a counter for going through list L's positions 
         typename list<Object>::const_iterator itr2;     // declares contstant iterator to transverse List L 
         for ( itr2 = L.begin(); itr2 != L.end(); ++itr2){  //transver list L 
           if(counter == *itr) {        
            cout<< *itr2 << " " ;
            break; }       
          counter++; }
          // if the counter is equal to the value of the iterator for list two put out value. 
    }
  } 
}
