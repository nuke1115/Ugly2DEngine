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

            inline entt::registry** begin()
            {
                return std::begin(_RegistryArray);
            }

            inline entt::registry** end()
            {
                return std::end(_RegistryArray);
            }

            inline entt::registry& GetPrivateRegistry()
            {
                return _PrivateRegistry;
            }

            inline entt::registry& GetSharedRegistry()
            {
                return _SharedRegistry;
            }

        };
    }
}

#endif // !UGLY_2D_ENGINE_entt_REGISTRY_WRAPPER