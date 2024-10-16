#include "counterType.h"

// Constructor
counterType::counterType() {
    counter = 0; // Initialize counter to 0
}

// Initialize counter to 0
void counterType::initialize() {
    counter = 0;
}

// Set counter to a specific value
void counterType::setCounter(int value) {
    if (value >= 0) {
        counter = value;
    }
}

// Get the current value of the counter
int counterType::getCounter() const {
    return counter;
}

// Increment the counter
void counterType::increment() {
    counter++;
}

// Decrement the counter
void counterType::decrement() {
    if (counter > 0) {
        counter--;
    }
}

// Reset the counter to 0
void counterType::reset() {
    counter = 0;
}