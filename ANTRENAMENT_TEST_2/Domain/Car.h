//
// Created by Ioana Gavrila on 30.03.2025.
//

#pragma once
#include <string>
using namespace std;
class Car{
  private:
    string manufacturer;
    string model;
    int year_of_fabrication;
    string color;

  public:
    Car();
    Car(string manufacturer, string model, int year_of_fabrication, string color);
    void setManufacturer(string manufacturer);
    void setModel(string model);
    void setYearOfFabrication(int year_of_fabrication);
    string getManufacturer();
    string getModel();
    int getYearOfFabrication();
    string getColor();
    void toString();
    bool equility(Car car1, Car car2);


};
