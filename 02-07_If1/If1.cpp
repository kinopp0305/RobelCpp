//
//  If1.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

void Birthmonth() {
    int a;
    
    cout << "あなたは何月生まれですか > ";
    cin >> a;
    
    if(1 <= a && a <= 12) {
        cout << "へー、" << a
        << " 月なんですか。" << endl;
    }
    else {
        cout << a << " 月やと！？" << endl
        << "んな月、あらへんわ！" << endl;
    }
}

int main(int argc, const char * argv[]) {
    Birthmonth();
    Birthmonth();
    return 0;
}
