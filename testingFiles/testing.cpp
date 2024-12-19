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

int main()
{
    wrapper t1,t2;

    Testcreate(10, t1.GetSharedRegistry());

    puts("now testing");

    for (auto& reg : t2)
    {
        auto view = reg->view<int>();
        for (auto entity : view)
        {
            auto& i = view.get<int>(entity);
            printf("%d\n",i);
        }
    }

    return 0;
}