// cpp_oarr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Coordinate.h"
using namespace std;
int main()
{
    Coordinate coor[3];
    coor[0].setX(3);
    coor[0].setY(5);
    cout << endl;

    Coordinate* p = new Coordinate[3];
    p->setX(7);
    p[0].setY(9);

    p++;//p=p+1; p+=1;

    p->setX(11);
    p[0].setY(13);

    p[1].setX(15);

    p++;

    p->setY(17);

    for (int i = 0; i < 3; i++) {
        cout <<"coor_x："<< coor[i].getX() << endl;
        cout<< "coor_y："<<coor[i].getY() << endl;
    }
    cout << endl;
    for (int j = 0; j < 3; j++) {
        cout << "p_x：" <<p->getX()<< endl;
        cout << "p_y："<<p->getY() << endl;
        p--;
    }

    p++;
    delete []p;
    p = NULL;

    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
