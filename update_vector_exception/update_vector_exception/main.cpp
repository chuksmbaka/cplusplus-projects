//
//  main.cpp
//  update_vector_exception
//
//  Created by iMac on 12.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void updateVector(std::vector<std::string>& firstvector_, std::vector<std::string>& secondvector_, std::string newString){
    firstvector_.push_back(newString);
    try{
        secondvector_.push_back(newString);
    } //
    catch(...){
        firstvector_.pop_back();
        cout << "second vector update failed." << endl;
    }
}

void updateVector2(std::vector<std::string>& firstvector_, std::vector<std::string>& secondvector_, std::string newString){
    firstvector_.push_back(newString);
    try {
        std::bad_alloc excep; //we creat an artificial bad allocation flag here
        throw excep;  //here we flag a bad allocation
        secondvector_.push_back(newString);
    }
    catch(...){
        firstvector_.pop_back();
        cout<<"second vector update failed." <<endl;
    }
}

int main() {
    // insert code here...
    std::vector<std::string> firstvector;
    std::vector<std::string> secondvector;
    std::string mystring("Hello World");
    
    cout << "Calling updateVector" <<endl;
    updateVector(firstvector, secondvector, mystring);
    cout <<"first vector size is " << firstvector.size() << " second vector size is " <<secondvector.size() << endl;
    
    
    cout << "Calling updateVector2 "<<endl;
    updateVector2(firstvector, secondvector, mystring);
    cout <<"first vector size is " << firstvector.size() << " second vector size is " <<secondvector.size() << endl;
}
