//
// Created by lhospital on 18-5-31.
//
/*
#ifndef GAMEENGINE_MYSELF_IAPPLICATION_HPP
#define GAMEENGINE_MYSELF_IAPPLICATION_HPP

#endif //GAMEENGINE_MYSELF_IAPPLICATION_HPP
 */

# pragma once
# include "Interface.hpp"
# include "IRuntimeModule.hpp"

namespace My {
    Interface IApplication : implements IRuntimeModule
    {
    public:
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        // One cycle of the main loop
        virtual void Tick() = 0;

        virtual bool IsQuit() = 0;

    };
}

/* 继承了IRuntimeModule接口，重载了之前的三个接口，同时增加了
 * IsQuit()的接口，从IApplication可以派生出各平台的Application类，
 * 这对提高代码的可维护性是十分重要的
 * */