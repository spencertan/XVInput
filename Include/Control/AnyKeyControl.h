#pragma once

namespace Xivi::Input::Control
{

class AnyKey
{
  Input::Device::Instance& m_device;
  bool &m_any;

public:

  AnyKey( Input::Device::Instance &device,
          bool &any) :
    m_device( device ),
    m_any(any)
  {}

  Input::Device::Instance &Device()
  {
    return m_device;
  }

  bool Value()
  {
    return m_any;
  }
};


}