#include <iostream>

int main() {
    // Question 1: Input/Output Streams demonstration
    // Using preferred low-latency '\n' stream optimization over std::endl
    std::cout << "--- Chapter 1 Mastery Verification ---" << '\n';

    // Question 2 & 4: Safe Brace Initialization of a fundamental C++ object
    // Enforces strict type safety and blocks dangerous narrowing conversions
    int verifiedScore{ 5 };
    [[maybe_unused]] int totalQuestions{ 5 };

    // Question 3: Avoiding Undefined Behavior (UB)
    // Always initialize local variables immediately to prevent reading RAM garbage
    int unintendedGarbage{ 0 }; 

    // Question 5: Execution Statement
    std::cout << "Quiz Score Secured: " << verifiedScore << "/5" << '\n';
    std::cout << "Safely handled uninitialized state tracking: " << unintendedGarbage << '\n';

    return 0;
}
