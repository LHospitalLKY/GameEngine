//
// Created by lhospital on 18-6-1.
//
// 图形管理模块的hpp文件
#ifndef GAMEENGINE_MYSELF_GRAPHICSMANAGER_HPP
#define GAMEENGINE_MYSELF_GRAPHICSMANAGER_HPP

# include "IRuntimeModule.hpp"

namespace My {
    class GraphicsManager : implements IRuntimeModule
            {
            public:
                virtual ~GraphicsManager() {}
            };
}

#endif //GAMEENGINE_MYSELF_GRAPHICSMANAGER_HPP
