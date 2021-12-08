#pragma once

namespace Xivi::Input::Control
{
class DPad
{
  Input::Device::Instance &m_device;
  Button m_up;
  Button m_down;
  Button m_left;
  Button m_right;

public:
  DPad( Input::Device::Instance &device,
        Button up,
        Button down,
        Button left,
        Button right ) :
    m_device( device ),
    m_up( up ),
    m_down( down ),
    m_left( left ),
    m_right( right )
  {}

  Input::Device::Instance &Device()
  {
    return m_device;
  }

  Button Up() const noexcept
  {
    return m_up;
  }

  Button Down() const noexcept
  {
    return m_down;
  }

  Button Left() const noexcept
  {
    return m_left;
  }

  Button Right() const noexcept
  {
    return m_right;
  }

  Vec2f Vector() const noexcept
  {
    Vec2f result {0.0f, 0.0f};
    if ( m_up.Pressed() )
      result.y += 1.0f;
    if ( m_down.Pressed() )
      result.y -= 1.0f;
    if ( m_left.Pressed() )
      result.x -= 1.0f;
    if ( m_right.Pressed() )
      result.x += 1.0f;
    return result;
  }
};
}