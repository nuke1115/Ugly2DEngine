#include <stdio.h>
#include "..\Ugly2DEngine\src\Headers\Wrappers\enttRegistryWrapper.hpp"
#include "..\Ugly2DEngine\src\Headers\GameScene\SceneBase.hpp"
#include "..\Ugly2DEngine\src\Headers\GameScene\SceneStorage.hpp"
#include "..\Ugly2DEngine\src\Headers\GameScene\SceneManager.hpp"

using namespace Ugly2DEngine;
using namespace GameScene;

class S1 : public SceneBase
{
private:
public:
    void Update(sf::RenderWindow& window)
    {

    }
    S1(std::string name, int id) : SceneBase(name, id)
    {

    }
};

class S2 : public SceneBase
{
private:
public:
    void Update(sf::RenderWindow& window)
    {

    }

    S2(std::string name, int id) : SceneBase(name, id)
    {

    }
};

int main()
{
    SceneManager mgr;
    S1 s1("s1",1);
    S2 s2("s2",2);
    
    mgr.RegisterScene(&s1);
    mgr.RegisterScene(&s2);
    mgr.Initialize(1);

    printf("%s %d\n",mgr.GetNowActivatedScene()->GetSceneName().c_str(), mgr.GetNowActivatedScene()->GetSceneID());

    SceneManager::ChangeActivatedScene("s2");

    printf("%s %d\n", mgr.GetNowActivatedScene()->GetSceneName().c_str(), mgr.GetNowActivatedScene()->GetSceneID());

    return 0;
}