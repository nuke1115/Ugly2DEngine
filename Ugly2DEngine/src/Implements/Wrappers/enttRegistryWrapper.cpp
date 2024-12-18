#include "..\..\Headers\Wrappers\enttRegistryWrapper.hpp"

entt::registry Ugly2DEngine::Wrappers::enttRegistryWrapper::_SharedRegistry;

Ugly2DEngine::Wrappers::enttRegistryWrapper::enttRegistryWrapper()
{
    enttRegistryWrapper::_RegistryArray[0] = &(enttRegistryWrapper::_PrivateRegistry);
    enttRegistryWrapper::_RegistryArray[1] = &(enttRegistryWrapper::_SharedRegistry);
}

entt::registry** Ugly2DEngine::Wrappers::enttRegistryWrapper::begin()
{
    return std::begin(enttRegistryWrapper::_RegistryArray);
}

entt::registry** Ugly2DEngine::Wrappers::enttRegistryWrapper::end()
{
    return std::end(enttRegistryWrapper::_RegistryArray);
}

entt::registry& Ugly2DEngine::Wrappers::enttRegistryWrapper::GetPrivateRegistry()
{
    return enttRegistryWrapper::_PrivateRegistry;
}

entt::registry& Ugly2DEngine::Wrappers::enttRegistryWrapper::GetSharedRegistry()
{
    return enttRegistryWrapper::_SharedRegistry;
}