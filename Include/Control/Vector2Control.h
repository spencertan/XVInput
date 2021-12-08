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
#ifdef XV_MATH
      return m_vec.x;
#else
      return std::get<1>(m_vec);
#endif
    }

    f32 Y() const noexcept
    {
#ifdef XV_MATH
      return m_vec.y;
#else
      return std::get<1>(m_vec);
#endif
    }

    Vec2f Vector() const noexcept
    {
      return m_vec;
    }
  };

}