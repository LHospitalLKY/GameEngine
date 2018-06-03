//
// Created by lhospital on 18-5-31.
//
# include "BaseApplication.hpp"

// 将BaseApplicaition类中的虚拟函数定义出来

// Parse command line, read configuration, initialize all sub modules
int My::BaseApplication::Initialize()
{
    m_bQuit = false;

    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files
void My::BaseApplication::Finalize()
{
    // TODO: Finish this method of Finalize()
}

// One cycle of the main loop
void My::BaseApplication::Tick()
{
    // TODO: Finish this method of Tick()
}

bool My::BaseApplication::IsQuit()
{
    return m_bQuit;
}