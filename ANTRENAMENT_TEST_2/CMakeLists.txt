cmake_minimum_required(VERSION 3.30)
project(ANTRENAMENT_TEST_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(ANTRENAMENT_TEST_2
        main.cpp
        Domain/Car.h
        Domain/Car.cpp
        Repo/Repository.h
        Repo/Repository.cpp
        Service/Service.h
        Service/Service.cpp
        UI/Ui.h
        UI/Ui.cpp


)
