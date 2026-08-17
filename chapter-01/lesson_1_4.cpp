#include <iostream> // for std::cout to work

int main()
 {
int a=5 ; // copy-initialisation
int b(6); // direct-initialisation
int c{7}; // direct-list-initialisation (most preffered)
int d{};  // value-initialization (gives us consistent value over default-initialisation)

std::cout <<a; //print 5 
std::cout <<b; //print 6
std::cout <<c; //print 7
std::cout <<d; //print 0

// example of direct-list-initialisation
// [[maybe_unused]] attribute is used so that compiler may not complain if any vaiable is defined but unused
 [[maybe_unused]]   double pi { 3.14159 };    // Don't complain if pi is unused
 [[maybe_unused]]    double gravity { 9.8 };  // Don't complain if gravity is unused
 [[maybe_unused]]    double phi { 1.61803 };  // Don't complain if phi is unused
 
    std::cout << pi << '\n';  //pi is used
    std::cout << phi << '\n'; //phi is used 

    // The compiler will no longer warn about gravity not being used

    return 0;
}
