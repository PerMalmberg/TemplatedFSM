// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#include "FinalEventState.h"

FinalEventState::FinalEventState( fsm::FSM<EventBaseState>& fsm ) : EventBaseState( "FinalEventState", fsm )
{}