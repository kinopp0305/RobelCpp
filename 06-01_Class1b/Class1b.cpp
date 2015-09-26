//
//  Class1b.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

#define ELEM(array)  (sizeof (array) / sizeof *(array))

class SStudent {
public:
    char szName[16];
    int  nJapanese;
    int  nMath;
    int  nEnglish;
    
    void Disp();
};

void SStudent::Disp() {
    cout << "名前 : "   << szName    << endl
    << "　国語 : " << nJapanese << " 点, "
    "数学 : "   << nMath     << " 点, "
    "英語 : "   << nEnglish  << " 点" << endl;
}

int main(int argc, const char * argv[]) {
    SStudent students[] = {
        { "赤井孝",   73, 98, 86, },
        { "笠井大介", 64, 45, 40, },
        { "吉田叶",   76, 78, 69, },
    };
    
    int i;
    
    for(i = 0; i < ELEM(students); i++)
        students[i].Disp();
    
    return 0;
}
