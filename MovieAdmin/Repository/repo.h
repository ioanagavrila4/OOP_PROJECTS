//
// Created by Ioana Gavrila on 23.03.2025.
//

#pragma once

#include <iostream>
#include "../Domain/movie.h"
#include "../Domain/domain.h"
class Repo{
  private:
    DynamicArray<Movie>* movies;
  public:
    //constructor
    Repo();
    //desstructor
    ~Repo();

    void addMovie(const Movie& movie);
    void updateMovie(const Movie& movie);
    void removeMovie(const Movie& movie);
    void increaseLikes(const std::string& title);
    int getSize();
    Movie& getMovie(int position);
    Movie* getAllMovies();
  };
