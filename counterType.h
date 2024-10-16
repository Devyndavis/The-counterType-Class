#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class counterType {
private:
    int counter;

public:
    // Constructor
    counterType();

    // Function prototypes
    void initialize(); // Pre: None, Post: counter = 0
    void setCounter(int value); // Pre: value >= 0, Post: counter = value
    int getCounter() const; // Pre: None, Post: returns current counter
    void increment(); // Pre: None, Post: counter++
    void decrement(); // Pre: counter > 0, Post: counter--
    void reset(); // Pre: None, Post: counter = 0
};

#endif