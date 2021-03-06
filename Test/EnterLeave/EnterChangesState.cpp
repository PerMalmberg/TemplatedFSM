// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#include "EnterChangesState.h"
#include "FinalState.h"

EnterChangesState::EnterChangesState()
		: EnterLeaveBaseState( "EnterChangesState" ), enterChain( *this )
{


}

void EnterChangesState::Enter()
{
	GetFSM().SetState( std::make_unique<FinalState>() );
}
