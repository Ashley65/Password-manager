//
// Created by NIgel work on 06/10/2023.
//

#include "passwordGen.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


// Constructor
passwordGen::passwordGen() {
    std::cout << "Password Generator Created" << std::endl;
    std::default_random_engine generator(std::time(nullptr));
}

// Destructor
passwordGen::~passwordGen() {
    std::cout << "Password Generator Destroyed" << std::endl;

}

// Methods
passwordGen::passwordGen(unsigned int length){
    passwordGen();
    setLength(length);
}

void

