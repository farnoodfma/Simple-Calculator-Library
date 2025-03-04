#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#ifdef CALCULATOR_EXPORTS
    #define CALCULATOR_API __declspec(dllexport)
#else
    #define CALCULATOR_API __declspec(dllimport)
#endif

namespace calc {

/**
 * A simple calculator class that provides basic arithmetic operations.
 */
class CALCULATOR_API Calculator {
public:
    // Constructor and destructor
    Calculator() = default;
    ~Calculator() = default;
    
    // Arithmetic operations
    double add(double a, double b) const;
    double subtract(double a, double b) const;
    double multiply(double a, double b) const;
    double divide(double a, double b) const;
};

} // namespace calc

#endif // CALCULATOR_H_INCLUDED