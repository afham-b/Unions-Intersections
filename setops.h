//Afham Bashir 10.16.20
#pragma once

#include <cstdlib>
#include <iostream>
#include <list>
#include <string>
using namespace std; 


template <typename Object>
std::list<Object> list_intersect (const std::list<Object>& L1, const std::list<Object>& L2){

typename list<Object>::const_iterator itr = L1.begin(); 
typename list<Object>::const_iterator itr2 = L2.begin(); 
list<Object> result;  
// declares two constatn iterators to transver both lists, and a final list called result. 

while( itr != L1.end() && itr2 != L2.end()){  // loop repeats untll both iterators reach the end of the lists 
  if(*itr == *itr2) {                        
    result.push_back(*itr);
    itr++; 
    itr2++; } 
    // if the value fo the iterators is the same, add only once using push back of iterator 1 and increament both iterators
    else if(*itr < *itr2)
    itr++;  // if value of iterator 1 is less than the value of iterator 2, then increament ilterator 1 
       else if( *itr2 < *itr) {      
           itr2++;} //if value of iterator 2 is less than the value of iterator 1, then increament ilterator 2 
    } 
  return result; // returns the final resulting list that has intersection. 
}


template <typename Object>
std::list<Object> list_union (const std::list<Object>& L1, const std::list<Object>& L2){

typename list<Object>::const_iterator itr = L1.begin(); 
typename list<Object>::const_iterator itr2 = L2.begin(); 
typename list<Object>::const_iterator itr3; 
// declares 3 iterators, each used to tranvserse list L1, L2, and the resulting union list 

list<Object> result; // declares list to contain union 

bool used = false; // declares bool that will be used to track if ther object to be inserted has been already inserted. 

bool end_list1 = 0; 
bool end_list2 = 0; 
//declares two bools that run the do while list, track if the iterators have reached end of their lists

  do {
    if(*itr == *itr2) {   //if value of both iterators is the same 
     for(itr3 = result.begin(); itr3!= result.end() ; itr3++) {
      if( *itr == *itr3){ used = true; } } 
      //transverses the result list, and if the value has already been used, modifies the used bool 
     
      if( used != true) {   // if used is false, as in that the value hasnt been inserted into the union list. 
      result.push_back(*itr);}   //insert value into the union list 
      used = false;      // reset the boolean value. 
    } 
    if( *itr > *itr2) { // if L1 iterator's value is less that value of iterator of L2, this changes order of the iteraotr pushback, with the lower value getting pushed back first. 
      for(itr3 = result.begin(); itr3!= result.end() ; itr3++) {
      if( *itr2 == *itr3){ used = true; } }
  
      if( used != true) { 
      result.push_back(*itr2);}
      used = false;
    
      for(itr3 = result.begin(); itr3!= result.end() ; itr3++) {
      if( *itr == *itr3){ used = true; } }
  
      if( used != true) { 
      result.push_back(*itr);}
      used = false;
    }
    if( *itr < *itr2){ //if L2 iterator's value is less that value of iterator of L1, this changes order of the iterator pushback, with the lower value getting pushed back first. 
      for(itr3 = result.begin(); itr3!= result.end() ; itr3++) {
      if( *itr == *itr3){ used = true; } }
    
      if( used != true) { 
      result.push_back(*itr);}
      used = false;


      for(itr3 = result.begin(); itr3!= result.end() ; itr3++) {
      if( *itr2 == *itr3){ used = true; } }
    
      if( used != true) { 
      result.push_back(*itr2);} 
      used = false;
    } 

    itr++;    
    itr2++;
    // increaments both iterators for both L1 & L2 


    if (itr == L1.end())
        end_list1 = true;    
    if(itr2 == L2.end())
        end_list2 = true;  
    // if iterator reaches end of their respective list, changes the bool that is used in the while condition below. 
        
  } while ( end_list1 == false || end_list2 == false); 

  return result; // return union list. 
}