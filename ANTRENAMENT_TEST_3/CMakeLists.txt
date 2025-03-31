cmake_minimum_required(VERSION 3.30)
project(ANTRENAMENT_TEST_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(ANTRENAMENT_TEST_3
        main.cpp
        Domain/Domain.h
        Domain/Domain.cpp
        Repository/Repo.h
        Repository/Repo.cpp
        Service/Service.h
        Service/Service.cpp
        UI/Ui.h
        UI/Ui.cpp
        info.txt


)
