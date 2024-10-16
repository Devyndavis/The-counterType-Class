#include <iostream>     // For input and output operations
#include "counterType.h" // Include the header file for counterType class

int main() {
    counterType myCounter; // Create an object of counterType

    // Test default constructor
    std::cout << "Initial counter value (default constructor): " << myCounter.getCounter() << std::endl;

    // Set counter to a specific value
    myCounter.setCounter(5);
    std::cout << "Counter value after setting to 5: " << myCounter.getCounter() << std::endl;

    // Test increment operation
    myCounter.increment();
    std::cout << "Counter value after increment: " << myCounter.getCounter() << std::endl;

    // Test decrement operation
    myCounter.decrement();
    std::cout << "Counter value after decrement: " << myCounter.getCounter() << std::endl;

    // Test reset operation
    myCounter.reset();
    std::cout << "Counter value after reset: " << myCounter.getCounter() << std::endl;

    // Attempt to decrement after reset
    myCounter.decrement();
    std::cout << "Counter value after attempting to decrement after reset: " << myCounter.getCounter() << std::endl;

    // Set counter to 10
    myCounter.setCounter(10);
    std::cout << "Counter value after setting to 10: " << myCounter.getCounter() << std::endl;

    return 0; // Indicate that the program ended successfully
}