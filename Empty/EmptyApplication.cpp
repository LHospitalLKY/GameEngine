//
// Created by lhospital on 18-6-1.
//
/* 在main()函数中，需要创建一个Application实例，否则程序无法运行
*  在这里我们新建Empty目录，代表一个特殊的平台，即无平台，然后在里
*  边写一个EmptyAppliction.cpp，来创建这个实例
**/

# include <BaseApplication.hpp>

namespace My {
    BaseApplication g_App;
    IApplication * g_pApp = &g_App;
}


