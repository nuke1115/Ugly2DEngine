#include "..\..\Headers\GameScene\SceneBase.hpp"

Ugly2DEngine::GameScene::SceneBase::SceneBase(std::string sceneName, int sceneID) : _SceneName(std::move(sceneName)), _SceneID(sceneID)
{
}

void Ugly2DEngine::GameScene::SceneBase::OnActivated()
{
}