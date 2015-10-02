# HerplasQt Document

### EventBus
HerplasQt provides an event system. All EEventObject class or EEventObject's child class can use this event system.

##### Create an EEventObject
You must create an EEventObject to posts and recives event.
'''c++
#include "Base\Base.h"

class MyEventObject : public EEventObject {
	
}