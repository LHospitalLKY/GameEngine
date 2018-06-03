//
// Created by lhospital on 18-5-31.
//

// 定义每个Runtime Module都应该支持的一些方法
# pragma once

# include "Interface.hpp"

namespace My {
    Interface IRuntimeModule{
    public:
        virtual ~IRuntimeModule() {};

        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        virtual void Tick() = 0;
    };
}

/*本部分的注解：
 * 代码段：
 *  # pragma once
 * 是一个声明，用来表示这个头文件在编译的时候只处理一次，对于较老的C/C++编
 * 译器来说这段代码是“陌生”的，这种情况下，需要改成以下形式：
 *
 *  # ifndef __INTERFACE_H__
 *  # define __INTERFACE_H__
 *
 *  <code>
 *
 *  # endif // __INTERFACE_H__
 *
 * 代码段:
 *  virtual ~IRuntimeModule() {};
 * 是虚函数的析构函数. 由于是空函数，因此在VS中不定义也是可以的，但这并不符合
 * C++标准. 对于有其他虚函数的类，建议把析构函数也声明为virtual，因为如果不
 * 这么做，那么当使用基类指针释放派生类的实例的时候，可能会导致只调用了基类的
 * 析构函数，产生memory leak的现象/
 *
 * 代码段：
 *  virtual int Initialize() = 0;
 *  virtual void Finalize() = 0;
 *  virtual void Tick() = 0;
 * 是虚成员函数. 定义为纯虚函数的目的是强制派生类实现这些方法，有效避免遗漏.
 *
 * 上述三个函数(接口)的作用：
 * 1. Initialize()，用来初始化模块
 * 2. Finalize()，用来在模块结束的时候打扫战场
 * 3. Tick()， 用来让驱动模块驱动该模块的执行，每调用一次，模块进行以单位的
 * 处理.
 *
 * TODO: 解释为什么到单独定义模块的初始化/反初始化函数，而不是在类的构造函数/析构函数中
 * */