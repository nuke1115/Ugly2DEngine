#ifndef UGLY_2D_ENGINE_entt_REGISTRY_WRAPPER
#define UGLY_2D_ENGINE_entt_REGISTRY_WRAPPER

#include <entt/entt.hpp>
#include <iterator>

namespace Ugly2DEngine
{
    namespace Wrappers
    {
        class enttRegistryWrapper
        {
        private:

            entt::registry* _RegistryArray[2];

            entt::registry _PrivateRegistry;
            static entt::registry _SharedRegistry;
        public:
            enttRegistryWrapper();

            entt::registry** begin();

            entt::registry** end();

            entt::registry& GetPrivateRegistry();

            entt::registry& GetSharedRegistry();

        };
    }
}

#endif // !UGLY_2D_ENGINE_entt_REGISTRY_WRAPPER