//
// Created by Ioana Gavrila on 30.03.2025.
//

#pragma once
#include "../Repo/Repository.h"
#include <vector>
using namespace std;
class Service{
  private:
    Repository repository = Repository();
  public:
    Service();
    void addCar(Car car);
    void removeCar(Car car);
    vector<Car> showCars();
    vector<Car> showVintageCars();


  };