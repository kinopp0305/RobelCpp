//
//  If2.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

void Divide() {
    int a, b;
    
    cout << "１番目の値を入力してください > ";
    cin >> a;
    
    cout << "２番目の値を入力してください > ";
    cin >> b;
    
    if(b == 0) {
        cout << "０では割れません！" << endl;
    } else {
        cout << a << " / " << b << " = "
        << a / b << " ... " << a % b << endl;
    }
    
    return;
}

int main(int argc, const char * argv[]) {
    Divide();
    Divide();
    return 0;
}
