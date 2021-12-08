#pragma once

namespace Xivi::Input::Control
{

  class Vector2
  {
    Input::Device::Instance &m_device;
    Vec2f &m_vec;

  public:
    Vector2(Input::Device::Instance &device,
            Vec2f &vec) : m_device(device),
                          m_vec(vec)
    {
    }

    f32 X() const noexcept
    {
      return m_vec.x;
    }

    f32 Y() const noexcept
    {
      return m_vec.y;
    }

    Vec2f Vector() const noexcept
    {
      return m_vec;
    }
  };

}