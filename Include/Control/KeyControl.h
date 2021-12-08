#pragma once

namespace Xivi::Input::Control
{

class Key : public Button
{
  Input::Device::Instance &m_device;
  Input::Key m_key;

public:
  Key( Input::Device::Instance &device,
       Input::Key key,
       bool &prev,
       bool &curr ) :
    Button( device, prev, curr ),
    m_device( device ),
    m_key( key )
  {}

  Input::Device::Instance &Device() const noexcept
  {
    return m_device;
  }

  Input::Key KeyCode() const noexcept
  {
    return m_key;
  }
};

}