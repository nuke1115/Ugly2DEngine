#include "..\..\Headers\Wrappers\enttRegistryWrapper.hpp"

entt::registry Ugly2DEngine::Wrappers::enttRegistryWrapper::_SharedRegistry;

Ugly2DEngine::Wrappers::enttRegistryWrapper::enttRegistryWrapper()
{
    enttRegistryWrapper::_RegistryArray[0] = &(enttRegistryWrapper::_PrivateRegistry);
    enttRegistryWrapper::_RegistryArray[1] = &(enttRegistryWrapper::_SharedRegistry);
}