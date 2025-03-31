//
// Created by Ioana Gavrila on 30.03.2025.
//

#include "Repository.h"
#include <vector>
using namespace std;

Repository::Repository(){
  ;
}
void Repository::addDefaultCars(){
  this->cars.push_back(Car("Fiat", "Bravo", 2007, "Red"));
  this->cars.push_back(Car("Fiat", "Idea", 2003, "Black"));
  this->cars.push_back(Car("Audi", "A5", 2007, "Blue"));
  this->cars.push_back(Car("BMV", "Coupe", 2013, "Pink"));
  this->cars.push_back(Car("Ford", "Fiesta", 1976, "Yellow"));
  }
void Repository::addCar(Car car){
  this->cars.push_back(car);
}
void Repository::removeCar(Car car){
  int is_there = 0;
  for(int i = 0; i < this->cars.size(); i++){
    if(this->cars[i].equility(this->cars[i], car)){
            is_there = 1;
            this->cars.erase(this->cars.begin() + i);
    }
  }

}

vector<Car> Repository::getAllCars(){
  return this->cars;
  }
vector<Car> Repository::SortCars(){
   sort(this->cars.begin(), this->cars.end(), [](Car car1, Car car2){
    return car1.getColor()<car2.getColor();
  });
   return this->cars;
}
vector<Car> Repository::getAllVintageCars(){
  SortCars();
  vector<Car> new_cars;
  for(int i = 0; i < this->cars.size(); i++){
    if(2025 - this->cars[i].getYearOfFabrication() > 45)
      new_cars.push_back(this->cars[i]);
  }
  return new_cars;
}