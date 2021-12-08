#pragma once

namespace Xivi::Input::Control
{
class Float
{
  Input::Device::Instance &m_device;
  f32 &m_float;

public:
  Float( Input::Device::Instance &device,
           f32 &floating_point ) :
    m_device( device ),
    m_float( floating_point )
  {}

  Input::Device::Instance &Device()
  {
    return m_device;
  }

  f32 Value() const noexcept
  {
    return m_float;
  }
};
}