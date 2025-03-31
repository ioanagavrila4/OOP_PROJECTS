//
// Created by Ioana Gavrila on 30.03.2025.
//
#include "Ui.h"
#include <iostream>
#include <vector>
#include <string>
#include "../Domain/Car.h"
using namespace std;
Ui::Ui(){
  ;
  }
void Ui::printMenu(){
  cout<<"--------------Car Manager-------------"<<endl;
  cout<<"1. Add Car"<<endl;
  cout<<"2. Remove Car"<<endl;
  cout<<"3. Show Cars"<<endl;
  cout<<"4. Show Vintage"<<endl;
  cout<<"5. Exit"<<endl;
  }

void Ui::addCar(){
    cout << "---Adding Car---" << endl;
    string manufacturer, model, color;
    int year;
    cout<<"Please enter your manufacturer: "<<endl;
    cin>>manufacturer;
    cout<<"Please enter your model: "<<endl;
    cin>>model;
    cout<<"Please enter year: "<<endl;
    cin>>year;
    cout<<"Please enter your color: "<<endl;
    cin>>color;
    Car car = Car(manufacturer, model, year, color);
    this->service.addCar(car);
    cout<<"Car added"<<endl;
  }
void Ui::removeCar(){
  cout << "---Deleting Car---" << endl;
  string manufacturer, model, color;
  int year;
  cout<<"Please enter your manufacturer: "<<endl;
  cin>>manufacturer;
  cout<<"Please enter your model: "<<endl;
  cin>>model;
  cout<<"Please enter year: "<<endl;
  cin>>year;
  cout<<"Please enter your color: "<<endl;
  cin>>color;
  Car car = Car(manufacturer, model, year, color);
  this->service.removeCar(car);
  cout<<"Car deleted"<<endl;
  }
void Ui::ShowCars(){
  vector<Car> cars = this->service.showCars();
  for(int i = 0; i < cars.size(); i++){
    cars[i].toString();
  }
  }
void Ui::ShowVintageCars(){
  vector<Car> cars = this->service.showVintageCars();
  for(int i = 0; i < cars.size(); i++){
    cars[i].toString();
    cout<<endl;
  }
  }
void Ui::Menu(){
  int choice;
  while(true){
    printMenu();
    cout << "Please enter your choice: "<<endl;
    cin>>choice;
    if(choice == 1){
      addCar();
    }
    else if(choice == 2){
      removeCar();
    }
    else if(choice == 3){
      ShowCars();
    }
    else if(choice == 4){
      ShowVintageCars();
    }
    else if(choice == 5){
      exit(0);
    }
    else{
      cout<<"Invalid choice"<<endl;
      }
  }
  }