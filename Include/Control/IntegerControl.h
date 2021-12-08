#pragma once

namespace Xivi::Input::Control
{
class Integer
{
  Input::Device::Instance &m_device;
  i32 &m_integer;

public:
  Integer( Input::Device::Instance &device,
           i32 &integer ) :
    m_device( device ),
    m_integer( integer )
  {}

  Input::Device::Instance &Device()
  {
    return m_device;
  }

  i32 Value() const noexcept
  {
    return m_integer;
  }
};
}