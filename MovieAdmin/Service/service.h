//
// Created by Ioana Gavrila on 24.03.2025.
//

#pragma once
#include "../Repository/repo.h"

class Service{
  private:
    Repo repo;
  public:
    Service();
    Service(const Repo& repo);
    void addMovie(const std::string &title, const std::string &genre, int year, int likes, const std::string &trailer);
    void deleteMovie(int position);
    void increaseLikes(const std::string &title);
    void updateMovie(const std::string &title, const std::string &genre, int year, int likes,const std::string &trailer);
    int getSizeOfArray();
    Movie* getAllMovies();
    std::vector<Movie> create_watch_list();

};