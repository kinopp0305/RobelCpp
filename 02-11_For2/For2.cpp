//
//  For2.cpp
//  RobelCpp
//
//  Created by 木下 英樹 on 2015/09/27.
//  Copyright © 2015年 木下 英樹. All rights reserved.
//

#include <iostream>
using namespace std;

int nResults[] = {
    641, 703, 405, 598, 402, 752, 330,   0, 445, 662,
    254, 710, 467, 530, 548, 485, 244, 396, 601, 510,
    532, 687, 623, 420, 647, 587, 490, 647, 575, 688,
    764, 633, 712, 312, 655, 425, 722, 631, 680, 602
};

int main(int argc, const char * argv[]) {
    int i;
    int nSum = 0;
    
    for(i = 0; i < 40; i++)
        nSum += nResults[i];
    
    cout << "クラスの平均点は " << nSum / 40.0
    << " 点です。" << endl;
    
    return 0;
}
