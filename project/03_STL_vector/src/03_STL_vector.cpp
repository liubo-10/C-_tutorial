/***********************************************************
 * @file name: 03_STL_vector.cpp
 * @author: liubo
 * @date: 2024.01.25
 * @describe: 巧用swap，收缩内存空间
 * 
 **********************************************************/
#include<iostream>
#include <unistd.h>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    cout << "----------------begain------------------" << endl;
    
    cout << "\n----------------大小 容量 测试------------------" << endl;
    vector<int> v;
    for (int i = 0; i < 100000;i ++) {
        v.push_back(i);
    }
    cout << "capacity:" << v.capacity() << endl; // capacity:131072
    cout << "size:" << v.size() << endl;         // size:100000

    // resize改变大小，不改变容量
    cout << "\n----------------resize 测试------------------" << endl;
    v.resize(10);
    cout << "capacity:" << v.capacity() << endl; // capacity:131072
    cout << "size:" << v.size() << endl;         // size:10
    

    // 巧用swap,收缩内存空间
    cout << "\n----------------swap 测试------------------" << endl;

    vector<int>(v).swap(v);
    cout << "capacity:" << v.capacity() << endl; // capacity:10
    cout << "size:" << v.size() << endl;         // size:10

    cout << "----------------end------------------" << endl;
    return EXIT_SUCCESS;
}

/**
 @expected output:
-----------------begain------------------

----------------大小 容量 测试------------------
capacity:131072
size:100000

----------------resize 测试------------------
capacity:131072
size:10

----------------swap 测试------------------
capacity:10
size:10
----------------end------------------

 */



