//
//  Func1.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/26.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int f(int x, int y)
{
    return 2 * x + y;
}

int main()
{
    cout << "f(1, 2) = " << f(1, 2) << endl;
    cout << "f(182, 144) = " << f(182, 144) << endl;
    
    return 0;
}
