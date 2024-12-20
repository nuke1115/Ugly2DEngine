#include <stdio.h>
#include "..\Ugly2DEngine\src\Headers\Wrappers\enttRegistryWrapper.hpp"
#include "..\Ugly2DEngine\src\Headers\GameScene\SceneBase.hpp"
#include "..\Ugly2DEngine\src\Headers\GameScene\SceneStorage.hpp"

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
    SceneStorage st;
    S1 s1("s1",1);
    S2 s2("s2",2);
    st.RegisterScene(&s1);
    st.RegisterScene(&s2);

    st.Initialize(2);

    printf("%s %d\n",st.GetNowActivatedScene()->GetSceneName().c_str(), st.GetNowActivatedScene()->GetSceneID());
    printf("%s %d\n", st.GetNowActivatedScene()->GetSceneName().c_str(), st.GetNowActivatedScene()->GetSceneID());

    st.ChangeActivatedScene("s1");

    printf("%s %d\n", st.GetNowActivatedScene()->GetSceneName().c_str(), st.GetNowActivatedScene()->GetSceneID());
    printf("%s %d\n", st.GetNowActivatedScene()->GetSceneName().c_str(), st.GetNowActivatedScene()->GetSceneID());

    return 0;
}