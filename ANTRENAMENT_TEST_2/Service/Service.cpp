//
// Created by Ioana Gavrila on 30.03.2025.
//

#include "Service.h"
#include <vector>
using namespace std;
Service::Service(){
  this->repository.addDefaultCars();
}
void Service::addCar(Car car){
  this->repository.addCar(car);
}
void Service::removeCar(Car car){
  this->repository.removeCar(car);
  }
 vector<Car>  Service::showCars(){
  return this->repository.getAllCars();
  }
 vector<Car>  Service::showVintageCars(){
  return this->repository.getAllVintageCars();
  }