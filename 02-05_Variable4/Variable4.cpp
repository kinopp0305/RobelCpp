//
//  Variable4.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int a = 0;

void Inc() {
    int b = 0;
    a++;
    b++;
    cout << a << " <- a | b -> " << b << endl;
    return;
}

int main(int argc, const char * argv[]) {
    Inc();
    Inc();
    Inc();
    return 0;
}
