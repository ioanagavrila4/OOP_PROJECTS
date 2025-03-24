cmake_minimum_required(VERSION 3.30)
project(MovieAdmin)

set(CMAKE_CXX_STANDARD 20)

include_directories(Domain)
include_directories(Repository)
include_directories(Service)
include_directories(UI)

add_executable(MovieAdmin
        Domain/domain.h
        Repository/repo.cpp
        Repository/repo.h
        Service/service.cpp
        Service/service.h
        UI/ui.cpp
        UI/ui.h
        main.cpp
        Domain/movie.h
        Domain/movie.cpp
        Tests/Tests.cpp
        Tests/Tests.h


)