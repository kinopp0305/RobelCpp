//
//  Input1.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    
    cout << "何か値を入れてね > ";
    cin >> a;
    
    cout << "その数を３で割った余りは"
    << a % 3 << " です。" << endl;
    
    return 0;
}
