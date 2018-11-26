//
//  main.cpp
//  stringinsert
//
//  Created by iMac on 13.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    // insert code here...
    string words = " My father is the king of ";
    cout <<words <<endl;
    words.insert(3,words);
    cout << words;
}
