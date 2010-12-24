#ifndef KEYSTROKERWINDOWS_H_
#define KEYSTROKERWINDOWS_H_

#include "config.h"
#ifdef WINDOWS

#include <windows.h>
#include <vector>
#include "KeyStroker.h"

class KeyStrokerWindows : public KeyStroker
{
public:
    KeyStrokerWindows();
    virtual ~KeyStrokerWindows();

    /** @see KeyStroker::StrokeKey() */

protected:
    virtual void PressKey(Key iKey, bool iPress);

private:
    void PushKey(unsigned int iVirtualKeyCode,bool iPress = true);

    std::vector<unsigned int> m_KeyMap;
    INPUT m_Input[256];
    unsigned int m_Cpt;
};

#endif
#endif
