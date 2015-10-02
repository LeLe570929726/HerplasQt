# HerplasQt Document

### EventBus
HerplasQt provides an event system. All EEventObject class or EEventObject's child class can use this event system.

##### Create an EEventObject
You must create an EEventObject to posts and recives event.
```c++
#include "Base\Base.h"

class MyEventObject : public EEventObject {
	
}
```
or
```c++
#include "Base\Base.h"

struct MyEventObject : public EEventObject {
	
}
```

##### Set a reciver
If you want to recive an event, you must set a reciver.
There are three type of reciver.

* Recive event by event object and event name.
In this type, you only can recive the event by a same event object and a same event.
```c++
setReciver(this, &MyEventObject::myEventReciver, "MyEventObject", "MyTempEvent");
```
* First parameter is the reciver object pointer.
* Second parameter is the reciver function pointer.
* Third paramter is the event object name.
* Fourth parameter is the event name.

* Recive event by event object.
In this type, you can recive all event by a same event object.
```c++
setReciver(this, &MyEventObject::myEventReciver, "MyEventObject", "");
```
* First parameter is the reciver object pointer.
* Second parameter is the reciver function pointer.
* Third paramter is the event object name.
* Fourth parameter is the event name(In this type, you must set "").

* Recive event by event name.
In this type, you can recive all event by a same event.
```c++
setReciver(this, &MyEventObject::myEventReciver, "", "MyTempEvent");
```
* First parameter is the reciver object pointer.
* Second parameter is the reciver function pointer.
* Third paramter is the event object name(In this type, you must set "").
* Fourth parameter is the event name.

##### Delete a reciver
If don't want wo recive an event, you can delete it.
There are three type to delete reciver, too.

* Delete a reciver by event object and event name.
In this type, you only can delete a reciver by a same event object and a same event.
```c++
removeReciver("MyEventObject", "MyTempEvent");
```
* First parameter is the reciver object name.
* Second parameter is the reciver event name.

* Delete a reciver by event object.
In this type, you can delete all revice by a same event object.
```c++
removeReciver("MyEventObject", "");
```
* First parameter is the reciver object name.
* Second parameter is the reciver event name(In this type, you must set "").

* Delete a reciver by event name.
In this type, you can delete all revice by a same event.
```c++
removeReciver("", "MyTempEvent");
```
* First parameter is the reciver object name(In this type, you must set "").
* Second parameter is the reciver event name.

##### Post an event
All right. Now you can post an event.
```c++
postEvent(*returnValue, *eventParameter, "MyEventObject", "MyTempEvent");
```
* First parameter is the return value's pointer.
* Second parameter is the event parameter's pointer.
* Third paramter is the event object name.
* Fourth parameter is the event name.

##### Event function
Event function must use this type. And this function must be a member function.
```c++
void myEventReciver(void *returnValue, void *parameter);
```

##### A example
This is an example to use event bus.
```c++
#include <QApplication>
#include <iostream>
#include "Base\Base.h"

class MyReciverObject : public EEventObject {
public:
	void set() {
		setReciver(this, &MyReciverObject::eventFunction, "MyEventObject", "MyEvent");
	}
	void eventFunction(void *, void *) {
		system("pause");
		removeReciver("MyEventObject", "MyEvent");
	}
};

class MyEventObject : public EEventObject {
public:
	void post() {
		postEvent((void *)nullptr, (void *)nullptr, "MyEventObject", "MyEvent");
	}
};

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);

	MyReciverObject myReciverObject;
	MyEventObject myEventObject;
	myReciverObject.set();
	myEventObject.post();
	myReciverObject.set();

	return a.exec();
}
```