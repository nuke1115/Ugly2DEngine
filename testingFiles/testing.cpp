#include <stdio.h>
#include "..\Ugly2DEngine\src\Headers\Wrappers\enttRegistryWrapper.hpp"

using wrapper = Ugly2DEngine::Wrappers::enttRegistryWrapper;

void Testcreate(int n, entt::registry& reg)
{
    for (int i = 0; i < n; i++)
    {
        auto entity = reg.create();
        reg.emplace<int>(entity, i);
    }
}


#include "..\Ugly2DEngine\src\Headers\GameScene\SceneBase.hpp"

class t : public Ugly2DEngine::GameScene::SceneBase
{
private:
    void Update(sf::RenderWindow& window) {}
public:
    t(std::string sceneName, int sceneID) : SceneBase(sceneName, sceneID)
    {
        printf("%s %d",_SceneName.c_str(), _SceneID);
    }
    
};


int main()
{
    t t("a", 3);

    return 0;
}