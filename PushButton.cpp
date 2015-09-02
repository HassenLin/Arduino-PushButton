#include "PushButton.h"
#include <inttypes.h>
#include <Arduino.h>
PushButton::PushButton(int PinNum) : m_pinNum(PinNum)
{
 pinMode(m_pinNum, INPUT_PULLUP);

}
bool PushButton::isHit()
{
if (digitalRead(m_pinNum) == LOW)
  {
    delay(10);
    if (digitalRead(m_pinNum) == LOW)
    {
      int cnt = 0;
      while (digitalRead(m_pinNum) == LOW)
      {
        cnt++;
        delay(10);
        if (cnt > 10)
          break;
      }
      return true;
    }
  }
  return false;
}