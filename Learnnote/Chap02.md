# Log1: 2018-05-31总结

构建了一个能够跨平台的框架。将框架代码放入Framework文件夹中，将main()函数放入Framework/Common文件夹中，表示不同平台公用一个程序入口。

由于不同平台代码可能不同，因此定义一套公用的接口，防止跨平台代码中漏写任何一个必要的函数。

## 接口Interface

在Interface中，存放的是IAppliction的抽象类，其顺序是Interface.hpp -> IApplication.hpp -> IRuntimeModule.hpp.

### Interface.hpp

Interface中只是定义一些宏，用Interface指代class，以便同实体类相区分，用implements指代public，用来与一般的public区分，提高代码的可读性。

### IRuntimeModule.hpp
定义每个RuntimeModule都应该支持的一些方法，IRuntimeModule所定义的接口是建立一个IApplication接口所需要的.
RuntimeModule接口中的方法主要有：
1. virtual ~IRuntimeModule(), 是虚函数的析构函数
2. virtual int Initialize() = 0; 用来初始化模块
3. virtual void Finalize() = 0; 用来结束模块
4. virtual void Tick() = 0; 用来驱动模块

### IApplication.hpp
继承了IRuntimeModule，并且重构了IRuntimeModule中的四个方法，并增加了IsQuit()接口，用于判断是否退出模块. 从IAppliction模块，可以派生出
各个平台的Application类，这代码的可维护性十分重要.


## 跨平台内容Common
除入口main之外，在该目录下定义/派生BasApplication类，在BaseApplication.hpp中定义类，在BasApplication.cpp中定义方法.

## 空平台Empty
在main()函数中，需要创建一个Application实例，否则程序无法运行. 在这里我们新建Empty目录，代表一个特殊的平台，即无平台，然后在里边写一个
EmptyAppliction.cpp，来创建这个实例.

## CMakeLists文件
CMakeLists文件用于编译构建，这一部分单独开一篇进行说明.