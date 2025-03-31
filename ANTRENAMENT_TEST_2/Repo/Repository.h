//
// Created by Ioana Gavrila on 30.03.2025.
//

#pragma once
#include "../Domain/Car.h"
#include <vector>
using namespace std;
class Repository{
  private:
    vector<Car> cars;
  public:
    Repository();
    void addDefaultCars();
    void addCar(Car car);
    void removeCar(Car car);
    vector<Car> getAllCars();
    vector<Car> SortCars();
    vector<Car> getAllVintageCars();
};