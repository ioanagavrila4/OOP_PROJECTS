#ifndef TEST_H
#define TEST_H

#include "../Domain/movie.h"
#include "../Repository/repo.h"
#include "../Service/service.h"

class Test {
public:
  // Static method to run all tests
  static void runAllTests();

  // Static methods for testing, now taking Service reference
  static void testAddMovie(Service& service, Repo& repo);
  static void testRemoveMovie(Service& service);
  static void testUpdateMovie(Service& service, Repo& repo);

private:
  // Prevent instantiation of the Test class
  Test() = delete;
  ~Test() = delete;
  Test(const Test&) = delete;
  Test& operator=(const Test&) = delete;
};

#endif // TEST_H