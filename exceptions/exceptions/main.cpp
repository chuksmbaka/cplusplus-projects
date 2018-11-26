/*  The c++ standard library provides an exception base class that can be derived and allows us to override the what and ~exception virtual functions in our derived class. This allows us to return a custom error message string and the destructor allows us to free any memory allocated on the heap with the operator new function. For example */

#include <iostream>
#include <exception>

using namespace std;

class derivedexception: public exception{
    virtual const char* what() const throw() { //overridden base class function what() which returns               the const char* c string "My derived exception”.
        return "My derived exception";
    }
} myderivedexception;

int main()
{
    try{
        throw myderivedexception; //line throws an exception of type myderivedexception which transfers control to the exception handler.
        
    }
    catch(exception& e)
    {
        cout<< e.what() << '\n';
    }
}
