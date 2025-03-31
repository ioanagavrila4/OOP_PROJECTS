//
// Created by Ioana Gavrila on 30.03.2025.
//
#include "Car.h"
#include <iostream>
Car::Car(string manufacturer, string model, int year_of_fabrication, string color){
  this->manufacturer = manufacturer;
  this->model = model;
  this->year_of_fabrication = year_of_fabrication;
  this->color = color;

}
void Car::setManufacturer(string manufacturer){
  this->manufacturer = manufacturer;
}
void Car::setModel(string model){
  this->model = model;
}
void Car::setYearOfFabrication(int year_of_fabrication){
  this->year_of_fabrication = year_of_fabrication;
}
string Car::getManufacturer(){
  return this->manufacturer;
}
string Car::getModel(){
  return this->model;
}
int Car::getYearOfFabrication(){
  return this->year_of_fabrication;
}
string Car::getColor(){
  return this->color;
}
void Car::toString(){
  cout << "Manufacturer: " << this->manufacturer <<"; Model: "<< this->model<<"; Year: "<<this->year_of_fabrication<<"; Color: "<<this->color<< endl;
}

bool Car::equility(Car car1, Car car2){
  if(car1.model == car2.model && car1.year_of_fabrication == car2.year_of_fabrication &&car1.manufacturer == car2.manufacturer && car1.color == car2.color){
    return true;
  }
  return false;
  }