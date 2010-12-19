/*
 * KeyStroker.h
 *
 *  Created on: 18 déc. 2010
 *      Author: canard
 */

#ifndef KEYSTROKER_H_
#define KEYSTROKER_H_

#include "config.h"
#ifdef WINDOWS
#endif
#ifdef LINUX
	#include <X11/Xlib.h>
	#include <X11/keysym.h>
#endif

class KeyStroker {
public:
	enum Key
	{

#ifdef LINUX
		LeftKey=XK_Left,
		RightKey=XK_Right,
		UpKey=XK_Up,
		DownKey=XK_Down
#endif

	};

	KeyStroker();
	virtual ~KeyStroker();

	/**
	 * Stroke a key.
	 * iCtrl, iAlt and iShift is for using combos with left ctrl, left alt and left shift.
	 */
	void StrokeKey(KeyStroker::Key iKey, bool iCtrl = false, bool iAlt = false, bool iShift = false);

private:
	KeyStroker(const KeyStroker&);
	KeyStroker& operator= (const KeyStroker&);

#ifdef LINUX
	Display * m_X11Display;
#endif

};

#endif /* KEYSTROKER_H_ */
