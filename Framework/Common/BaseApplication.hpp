//
// Created by lhospital on 18-5-31.
//

#ifndef GAMEENGINE_MYSELF_BASEAPPLICATION_HPP
#define GAMEENGINE_MYSELF_BASEAPPLICATION_HPP

# include "../Interface/IApplication.hpp"

namespace My {
    class BaseApplication : implements IApplication
    {
    public:
        virtual int Initialize();
        virtual void Finalize();
        // One cycle of the main loop
        virtual void Tick();

        virtual bool IsQuit();

    protected:
        // Flag if need quit the main loop of the application
        bool m_bQuit;
    };
}

#endif //GAMEENGINE_MYSELF_BASEAPPLICATION_HPP
