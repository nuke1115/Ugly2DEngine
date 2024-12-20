#ifndef UGLY_2D_ENGINE_SCENE_MANAGER_HEADER
#define UGLY_2D_ENGINE_SCENE_MANAGER_HEADER

#include "..\GameScene\SceneBase.hpp"
#include "..\GameScene\SceneStorage.hpp"

namespace Ugly2DEngine
{
    namespace GameScene
    {
        class SceneManager
        {
        private:
            static SceneStorage _SceneStorage;
        public:
            /// <summary>
            /// returns now activated scene pointer
            /// </summary>
            inline SceneBase* GetNowActivatedScene()
            {
                return _SceneStorage.GetNowActivatedScene();
            }

            /// <summary>
            /// initializes NowActivatedScene pointer
            /// </summary>
            inline void Initialize(int sceneID)
            {
                _SceneStorage.Initialize(sceneID);
            }

            /// <summary>
            /// initializes NowActivatedScene pointer
            /// </summary>
            inline void Initialize(const std::string& sceneName)
            {
                _SceneStorage.Initialize(sceneName);
            }

            /// <summary>
            /// changes now activated scene pointer to other scene that scene ID indicates
            /// </summary>
            static inline void ChangeActivatedScene(int sceneID)
            {
                _SceneStorage.ChangeActivatedScene(sceneID);
            }

            /// <summary>
            /// changes now activated scene pointer to other scene that scene name indicates
            /// </summary>
            static inline void ChangeActivatedScene(const std::string& sceneName)
            {
                _SceneStorage.ChangeActivatedScene(sceneName);
            }

            /// <summary>
            /// registers scene pointer
            /// </summary>
            inline void RegisterScene(SceneBase* scene)
            {
                _SceneStorage.RegisterScene(scene);
            }
        };
    }
}


#endif // !UGLY_2D_ENGINE_SCENE_MANAGER_HEADER
