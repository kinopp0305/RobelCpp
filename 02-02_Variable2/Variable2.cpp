//
//  Variable2.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/26.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    
    a += 2;
    cout << "a += 2        -> a = " << a << endl;
    
    ++a;
    cout << "++a           -> a = " << a << endl;
    
    a = a * 5 + 2;
    cout << "a = a * 5 + 2 -> a = " << a << endl;
}
