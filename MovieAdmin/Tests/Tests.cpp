#include "Tests.h"
#include <iostream>
#include <stdexcept>
#include <memory>
#include "../Domain/domain.h"
#include "../Domain/movie.h"
#include "../Repository/repo.h"
#include "../Service/service.h"

void Test::runAllTests() {
    int passedTests = 0;
    int totalTests = 3;

    std::cout << "Starting test suite..." << std::endl;

    // Create a single repository and service to be used across all tests
    Repo repo;
    Service service(repo);

    // Add movie test
    try {
        std::cout << "Running testAddMovie()... ";
        testAddMovie(service, repo);
        std::cout << "PASSED" << std::endl;
        passedTests++;
    } catch (const std::exception& e) {
        std::cout << "FAILED: " << e.what() << std::endl;
    }

    // Remove movie test
    try {
        std::cout << "Running testRemoveMovie()... ";
        testRemoveMovie(service);
        std::cout << "PASSED" << std::endl;
        passedTests++;
    } catch (const std::exception& e) {
        std::cout << "FAILED: " << e.what() << std::endl;
    }

    // Update movie test
    try {
        std::cout << "Running testUpdateMovie()... ";
        testUpdateMovie(service, repo);
        std::cout << "PASSED" << std::endl;
        passedTests++;
    } catch (const std::exception& e) {
        std::cout << "FAILED: " << e.what() << std::endl;
    }

    // Final summary
    std::cout << "\nTest Suite Summary:" << std::endl;
    std::cout << "Total Tests: " << totalTests << std::endl;
    std::cout << "Passed Tests: " << passedTests << std::endl;
    std::cout << "Failed Tests: " << (totalTests - passedTests) << std::endl;

    // Check if all tests passed
    if (passedTests != totalTests) {
        std::cerr << "Not all tests passed!" << std::endl;
    } else {
        std::cout << "All tests passed successfully!" << std::endl;
    }
}

void Test::testAddMovie(Service& service, Repo& repo) {
    try {
        // Debug print
        std::cout << "Initial repository size: " << service.getSizeOfArray() << std::endl;

        // Check initial state
        if (service.getSizeOfArray() != 10) {
            throw std::runtime_error("Initial repository size is incorrect");
        }

        // Add movie and verify
        service.addMovie("Interstellar", "Sci-Fi", 2014, 900000, "https://www.imdb.com/title/tt0816692/");

        // Debug print
        std::cout << "Repository size after adding movie: " << service.getSizeOfArray() << std::endl;

        // Verify size increase
        if (service.getSizeOfArray() != 11) {
            throw std::runtime_error("Movie addition failed to increase repository size");
        }

        // Additional verification
        Movie lastMovie = repo.getMovie(10);
        std::cout << "Added Movie Details:" << std::endl;
        std::cout << "Title: " << lastMovie.getTitle() << std::endl;
        std::cout << "Genre: " << lastMovie.getGenre() << std::endl;
        std::cout << "Year: " << lastMovie.getYear() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception in testAddMovie: " << e.what() << std::endl;
        throw; // Re-throw to ensure test failure is noted
    }
}

void Test::testRemoveMovie(Service& service) {
    // Check initial state
    std::cout << "Initial repository size for delete: " << service.getSizeOfArray() << std::endl;

    if (service.getSizeOfArray() != 11) {
        throw std::runtime_error("Initial repository size is incorrect");
    }

    // Remove movie and verify
    service.deleteMovie(5);

    if (service.getSizeOfArray() != 10) {
        throw std::runtime_error("Movie removal failed to decrease repository size");
    }
}

void Test::testUpdateMovie(Service& service, Repo& repo) {
    // Update movie and verify
    service.updateMovie("Titanic", "Drama", 1997, 4, "https://www.imdb.com/title/tt0120338/");

    Movie updatedMovie = repo.getMovie(0);

    // Detailed output of updated movie
    std::cout << "Updated Movie Details:" << std::endl;
    std::cout << "Title: " << updatedMovie.getTitle() << std::endl;
    std::cout << "Genre: " << updatedMovie.getGenre() << std::endl;
    std::cout << "Year: " << updatedMovie.getYear() << std::endl;
    std::cout << "Likes: " << updatedMovie.getLikes() << std::endl;
    //std::cout << "Link: " << updatedMovie.getLink() << std::endl;

    // Verification
    if (updatedMovie.getLikes() != 4) {
        throw std::runtime_error("Movie update failed to modify likes");
    }

    // Additional verifications
    if (updatedMovie.getTitle() != "Titanic") {
        throw std::runtime_error("Movie title was not updated correctly");
    }

    if (updatedMovie.getGenre() != "Drama") {
        throw std::runtime_error("Movie genre was not updated correctly");
    }
}

