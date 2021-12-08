#pragma once

namespace Xivi::Input::Control
{

  class Button
  {
    Input::Device::Instance &m_device;
    bool &m_prev;
    bool &m_curr;

  public:
    Button(Input::Device::Instance &device,
            bool &prev, 
            bool &curr): 
      m_device(device), 
      m_prev(prev), 
      m_curr(curr)
    {
    }

    Input::Device::Instance& Device()
    {
      return m_device;
    }

    inline bool Triggered() const noexcept
    {
      return (m_prev & m_curr) ^ m_curr;
    }

    inline bool Pressed() const noexcept
    {
      return m_prev && m_curr;
    }

    inline bool Released() const noexcept
    {
      return m_prev && !m_curr;
    }
  };

}