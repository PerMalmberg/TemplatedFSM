// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#include "EnterLeaveState.h"

///////////////////////////////////////////////////////////////////////////////
//
//
///////////////////////////////////////////////////////////////////////////////
EnterLeave::EnterLeave( EnterLeaveTestData &d, std::string name, fsm::FSM &fsm ) :
		BaseState( name, fsm ), data( d ),
		enterChain( *this ), leaveChain( *this )
{
}

///////////////////////////////////////////////////////////////////////////////
//
//
///////////////////////////////////////////////////////////////////////////////
void EnterLeave::Enter()
{
	if( data.count == 0 )
	{
		data.count++;
	}
}

///////////////////////////////////////////////////////////////////////////////
//
//
///////////////////////////////////////////////////////////////////////////////
void EnterLeave::Leave()
{
	if( data.count == 1 )
	{
		data.count--;
	}
}
