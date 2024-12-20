#include "..\..\Headers\GameScene\SceneStorage.hpp"


Ugly2DEngine::GameScene::SceneStorage::SceneStorage()
{
    _NowActivatedScene = nullptr;
}

void Ugly2DEngine::GameScene::SceneStorage::Initialize(int sceneID)
{

    assert(!_ScenePointerStorage.empty() && "no scenes are registered");

    if (!_IsNowActivatedScenePtrInitialized&&_ScenePointerStorage.contains(sceneID))
    {
        _NowActivatedScene = _ScenePointerStorage[sceneID];
        _IsNowActivatedScenePtrInitialized = true;
    }
}

void Ugly2DEngine::GameScene::SceneStorage::Initialize(const std::string& sceneName)
{
    Initialize((_KeyIndexStorage[sceneName]));
}

void Ugly2DEngine::GameScene::SceneStorage::ChangeActivatedScene(int sceneID)
{
    
    if (_ScenePointerStorage.contains(sceneID))
    {
        _NowActivatedScene = _ScenePointerStorage[sceneID];
    }
}

void Ugly2DEngine::GameScene::SceneStorage::ChangeActivatedScene(const std::string& sceneName)
{
    ChangeActivatedScene(_KeyIndexStorage[sceneName]);
}

void Ugly2DEngine::GameScene::SceneStorage::RegisterScene(SceneBase* scene)
{
    assert(!(scene == nullptr) && ": err attempted to register null scene pointer");
    assert(!_ScenePointerStorage.contains(scene->GetSceneID()) && ": err duplicated scene id");
    assert(!_KeyIndexStorage.contains(scene->GetSceneName()) && ": err duplicated scene name");
    
    _ScenePointerStorage[scene->GetSceneID()] = scene;
    _KeyIndexStorage[scene->GetSceneName()] = scene->GetSceneID();
}