//
// Created by Ioana Gavrila on 23.03.2025.
//

#pragma once

#include <iostream>
#include <string.h>
#include "movie.h"

template <typename TElem> class DynamicArray{
  private:
    int size{};
    int capacity{};
    TElem* elems;

  public:
    //default constructor of the dynamic array:
    DynamicArray(int capacity){
      this->size = 0;
      this->capacity = capacity;
      this->elems = new TElem[capacity];
    }

    //copy constructor

    DynamicArray(const DynamicArray& arr){
      this->size = arr.size;
      this->capacity = arr.capacity;
      this->elems = new TElem[capacity];
      for(int i = 0; i < size; i++){
        this->elems[i] = arr.elems[i];
      }
    }
    //destructor
    ~DynamicArray(){
      delete[] this->elems;
    }

    //assignment operator for a dynamical vector/array:

    DynamicArray& operator=(const DynamicArray& arr){
      if(this == &arr)
        return *this;
      this->size = arr.size;
      this->capacity = arr.capacity;

      delete[] this->elems;
      this->elems = new TElem[capacity];
      for(int i = 0; i < size; i++){
        this->elems[i] = arr.elems[i];

      }
      return *this;
    }
    //resize the current dynamic aray and multiply its capacity by a given factor
    void resize(int factor){
      this->capacity *= factor;

      TElem* temp = new TElem[this->capacity];

     for(int i = 0; i < this->size; i++){
       temp[i] = this->elems[i];
     }
     delete[] this->elems;
     this->elems = temp;
    }

    //adding an element to the dynamic array:
    void addMovie(const TElem& elem){
      for(int i = 0; i < this->size; i++){
        if(this->elems[i].getTitle() == elem.getTitle()){
          std::cout<<"Movie already exists!"<<std::endl;
          return;
        }

      }
      if(this->size >= this->capacity){
        this->resize(2);
      }
      this->elems[this->size++] = elem;
      std::cout<<"Movie was added!!"<<std::endl;

    }

    void updateMovie(const TElem& elem){
      bool ok = false;
      for(int i = 0; i < this->size; i++){
        if(this->elems[i].getTitle() == elem.getTitle()){
          ok = true;
          this->elems[i] = elem;
        }

      }
      if(!ok){
        std::cout<<"Movie does not exists..."<<std::endl;
      }
      std::cout<<"Movie was updated!!"<<std::endl;
    }

     //delete a movie function:
    void deleteMovie(const std::string& title){
      bool ok = false;
      for(int i = 0; i < this->size; i++){
        if(this->elems[i].getTitle() == title){
          ok = true;
          for(int j = i; j < this->size; j++){
            this->elems[j] = this->elems[j + 1];
          }
          this->size--;
          break;
        }
      }
      if(!ok){
        std::cout<<"Movie does not exists..."<<std::endl;
      }
      std::cout<<"Movie was deleted!!"<<std::endl;
    }

    //function for increasing the likes number
    void increaseLikes(const std::string& title){
      bool ok = false;
      for(int i = 0; i < this->size; i++){
        if(this->elems[i].getTitle() == title){
          ok = true;
          this->elems[i].setLikes(this->elems[i].getLikes() + 1);

        }
      }
      if(!ok){
        std::cout<<"Movie does not exists..."<<std::endl;

      }
      std::cout<<"The likes number for the selected movie was increased!!!!"<<std::endl;
    }

    //function for returning the size of the dynamic array
    int getSize() const{
      return this->size;
    }

    //function for returning the element from a given index of position
    TElem& get_movie(int poz){
      return this->elems[poz];
    }
    TElem* get_all(){
      return this->elems;
    }
};
