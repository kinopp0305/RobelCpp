//
//  Func1b.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/26.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

void f(int x, int y)
{
    cout << "f(" << x << ", " << y
    << ") = " << 2 * x + y << endl;
}

int main()
{
    f(1, 2);
    f(182, 144);
    return 0;
}
