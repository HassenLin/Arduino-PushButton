#ifndef PushButton_H
#define PushButton_H
class PushButton{
  private:
    int m_pinNum;
  public:
    bool m_Level;
    PushButton(int PinNum);
    bool isHit();
};
#endif
