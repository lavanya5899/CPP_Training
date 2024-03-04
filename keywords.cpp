// keywords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

// Global variable
int globalVar = 0;

// Global static variable
static int globalStaticVar = 100;

// Auto keyword example
void autoKeywordExample(int value) {
    std::cout << "This is the 'auto' keyword example.\n";
    auto x = value;
    auto y = 7.89;
    auto z = "Lavanya";

    std::cout << "x: " << x << ", Type: " << typeid(x).name() << std::endl;
    std::cout << "pi: " << y << ", Type: " << typeid(y).name() << std::endl;
    std::cout << "message: " << z << ", Type: " << typeid(z).name() << std::endl << std::endl;

    // Using global variable in the function
    globalVar += x;
    std::cout << "Global variable in autoKeywordExample: " << globalVar << std::endl;
}

// Register keyword example
void registerKeywordExample() {
    std::cout << "\nThis is the 'register' keyword example.\n";
    register int k = 0; // Cache it in CPU register, no need to bring from primary memory every time
    while (k < 10)
    {
         k++;
    }
    std::cout << "Value of k: " << k << std::endl;
    // Using global static variable in the function
    globalStaticVar += k;
    std::cout << "Global static variable in registerKeywordExample: " << globalStaticVar << std::endl;
}

// Volatile keyword example
void volatileKeywordExample(int volVar) {
    std::cout << "\nThis is the 'volatile' keyword example.\n";
    volatile int localVar = volVar;
    std::cout << "Value of 'volVar' (declared as volatile): " << localVar << std::endl;

    // Using global variable in the function
    globalVar += localVar;
    std::cout << "Global variable in volatileKeywordExample: " << globalVar << std::endl;
}

// Compl keyword example
void complKeywordExample(int num) {
    std::cout << "\nThis is the 'compl' keyword example.\n";
    int complNum = ~num; // Bitwise NOT operation
    std::cout << "Value of 'complNum' (complement of 'num'): " << complNum << std::endl;

    // Using global static variable in the function
    globalStaticVar += complNum;
    std::cout << "Global static variable in complKeywordExample: " << globalStaticVar << std::endl;
}

// nullptr keyword example
void nullptrKeywordExample() {
    std::cout << "\nThis is the 'nullptr' keyword example.\n";
    int* ptr = nullptr;

    if (ptr != nullptr) {
        std::cout << "Not a nullptr" << std::endl;
    }
    else {
        std::cout << "Is a nullptr" << std::endl;
    }
    std::cout << "Value of 'ptr' (initialized with nullptr): " << ptr << std::endl;
}

// Static_assert keyword example
void staticAssertKeywordExample() {
    std::cout << "\nThis is the 'static_assert' keyword example.\n";
    const int size = 11;
    static_assert(size > 10, "size must be greater than 10");
    std::cout << "Size must be greater than 10" << std::endl;

}

// Enum keyword example
void enumKeywordExample() {
    std::cout << "\nThis is the 'enum' keyword example.\n";
    enum Color { RED, GREEN, BLUE };
    Color selectedColor = GREEN;
    switch (selectedColor) {
    case Color::RED:
        std::cout << "Selected color is Red" << std::endl;
        break;
    case Color::GREEN:
        std::cout << "Selected color isGreen" << std::endl;
        break;
    case Color::BLUE:
        std::cout << "Selected color is Blue" << std::endl;
        break;
    default:
        std::cout << "Invalid color" << std::endl;
        break;
    }
}

int main() {
    autoKeywordExample(42);
    registerKeywordExample();
    volatileKeywordExample(30);
    complKeywordExample(5);
    nullptrKeywordExample();
    staticAssertKeywordExample();
    enumKeywordExample();

    // Displaying global variable and global static variable in main
    std::cout << std::endl << "In main function:\n";
    std::cout << "Global variable: " << globalVar << "\n";
    std::cout << "Global static variable: " << globalStaticVar << "\n";

    return 0;
}
