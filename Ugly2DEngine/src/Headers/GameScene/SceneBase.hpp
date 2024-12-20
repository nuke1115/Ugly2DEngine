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
            /// <para>This is a base class constructor.</para>
            /// <para>Someone says : use or discard... make your choice.</para>
            /// </summary>
            SceneBase(std::string sceneName = "Ugly2DEngineNullSceneNameNotSetNull", int sceneID = -1);
            
            SceneBase(SceneBase&&) = delete;

            SceneBase(const SceneBase&) = delete;
                
            /// <summary>
            /// <para>Engine calls this function every frame</para>
            /// <para>You MUST override this function</para>
            /// </summary>
            /// <param name="window">: A window that can render something</param>
            virtual void Update(sf::RenderWindow& window) = 0;

            /// <summary>
            /// <para>Engine calls this function when activated scene is changed to this scene</para>
            /// </summary>
            virtual void OnActivated();

            inline int GetSceneID() const
            {
                return _SceneID;
            }

            inline const std::string& GetSceneName() const
            {
                return _SceneName;
            }

        };
    }
}

#endif // !UGLY_2D_ENGINE_SCENE_BASE_HEADER