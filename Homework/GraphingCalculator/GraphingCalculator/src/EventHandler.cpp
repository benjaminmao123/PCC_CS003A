#include "EventHandler.h"
#include "Event.h"

EventHandler::EventHandler()
{

}

EventHandler::EventHandler(const EventHandler& other)
{
	for (auto& e : events)
		operator+=(e);
}

EventHandler::~EventHandler()
{
	for (auto& e : events)
		delete e;
}

void EventHandler::Invoke()
{
	for (auto& e : events)
		e->Invoke();
}

EventHandler& EventHandler::operator+=(Event* event)
{
	for (const auto& e : events)
	{
		if (e == event)
			return *this;
	}

	events.PushBack(event);

	return *this;
}

EventHandler& EventHandler::operator-=(Event* event)
{
	int index = 0;

	for (auto& e : events)
	{
		if (e == event)
		{
			events.Remove(events.begin() + index);
			break;
		}

		++index;
	}

	return *this;
}
