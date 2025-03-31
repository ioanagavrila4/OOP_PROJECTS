//
// Created by Ioana Gavrila on 30.03.2025.
//

#pragma once
#include "../Service/Service.h"
#include <iostream>
using namespace std;
class Ui{
  private:
    Service service = Service();

  public:
    Ui();
    void printMenu();
    void Menu();
    void addCar();
    void removeCar();
    void ShowCars();
    void ShowVintageCars();

};