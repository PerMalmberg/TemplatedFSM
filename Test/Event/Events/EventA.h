// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#pragma once

#include <FSM/EventBase.h>
#include "../EventBaseState.h"

class EventA : public fsm::EventBase<EventBaseState>
{

public:
	void Execute( std::shared_ptr<EventBaseState> state ) override
	{
		state->Event( *this );
	}

};