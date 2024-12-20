#ifndef UGLY_2D_ENGINE_SCENE_STORAGE_HEADER
#define UGLY_2D_ENGINE_SCENE_STORAGE_HEADER

#include <unordered_map>
#include <string>
#include <cassert>
#include "..\GameScene\SceneBase.hpp"


namespace Ugly2DEngine
{
    namespace GameScene
    {
        class SceneStorage
        {
        private:
            std::unordered_map<int, SceneBase*> _ScenePointerStorage;
            std::unordered_map<std::string, int> _KeyIndexStorage;

            SceneBase* _NowActivatedScene = nullptr;
            bool _IsNowActivatedScenePtrInitialized = false;
        public:
            
            SceneStorage();
            SceneStorage(SceneStorage&&) = delete;
            SceneStorage(const SceneStorage&) = delete;

            /// <summary>
            /// returns now activated scene pointer
            /// </summary>
            inline SceneBase* GetNowActivatedScene()
            {
                return _NowActivatedScene;
            }

            /// <summary>
            /// initializes NowActivatedScene pointer
            /// </summary>
            void Initialize(int sceneID);

            /// <summary>
            /// initializes NowActivatedScene pointer
            /// </summary>
            void Initialize(const std::string& sceneName);

            /// <summary>
            /// changes now activated scene pointer to other scene that scene ID indicates
            /// </summary>
            void ChangeActivatedScene(int sceneID);

            /// <summary>
            /// changes now activated scene pointer to other scene that scene name indicates
            /// </summary>
            void ChangeActivatedScene(const std::string& sceneName);

            /// <summary>
            /// registers scene pointer
            /// </summary>
            void RegisterScene(SceneBase* scene);
        };
    }
}


#endif // !UGLY_2D_ENGINE_SCENE_STORAGE_HEADER