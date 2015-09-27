//
//  If3.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int ChangeToShohwa(int a) {
    if(1926 <= a && a <= 1989)
        return a - 1925;
    else
        return 0;
}

void Shohwa() {
    int a;
    
    cout << "西暦を入力して下さい > ";
    cin >> a;
    
    if(ChangeToShohwa(a) == 0)
        cout << "その年は昭和ではありません。" << endl;
    else
        cout << "その年は昭和 " << ChangeToShohwa(a)
        << " 年です。" << endl;
}

int main(int argc, const char * argv[]) {
    Shohwa();
    Shohwa();
    return 0;
}
