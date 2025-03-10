#pragma once
#include "glm/glm.hpp"
#include "optix.h"
#include "Device/Camera.h"

namespace EasyRender::Programs::WireFrame
{

struct LaunchParams
{
    int frameID;
    glm::ivec2 fbSize;
    Device::PinholeCamFrame camera;
    glm::vec4 *radianceBuffer;
    glm::u8vec4 *colorBuffer;
    OptixTraversableHandle traversable;
};

} // namespace EasyRender
