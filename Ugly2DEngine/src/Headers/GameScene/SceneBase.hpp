#ifndef UGLY_2D_ENGINE_SCENE_BASE_HEADER
#define UGLY_2D_ENGINE_SCENE_BASE_HEADER

#include <string>
#include <utility>
#include <SFML/Graphics/RenderWindow.hpp>
#include "..\Wrappers\enttRegistryWrapper.hpp"

namespace Ugly2DEngine
{
    namespace GameScene
    {
        class SceneBase
        {
        protected:
            Wrappers::enttRegistryWrapper _Registry;
            std::string _SceneName = "Ugly2DEngineNullSceneNameNotSetNull";
            int _SceneID = -1;

        public:
            /// <summary>
            /// This is a base class constructor.
            /// Someone says : use or discard... make your choice.
            /// </summary>
            /// <param name="std::string sceneName"></param>
            /// <param name="int sceneID"></param>
            SceneBase(std::string sceneName = "Ugly2DEngineNullSceneNameNotSetNull", int sceneID = -1);

            SceneBase(SceneBase&&) = delete;

            SceneBase(const SceneBase&) = delete;

            virtual void Update(sf::RenderWindow& window) = 0;

            virtual void OnActivated();

        };
    }
}

#endif // !UGLY_2D_ENGINE_SCENE_BASE_HEADER