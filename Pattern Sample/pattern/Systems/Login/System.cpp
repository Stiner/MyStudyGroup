#include "stdafx.h"

#include "./System.h"

#include "./NState/Static.h"

namespace pattern { namespace Systems { namespace Login {

struct Private
{
	NState::IState *		pState;
};

System::System()
{
	This					= new Private;
	This->pState			= NState::STATIC()->Init();
}

System::~System()
{
	delete This;
}

void
System::OnPacket( Packet * pPacket )
{
	typedef					NState::IState
							IState;
	
	IState * pCurrentState	= This->pState;

	IState * pNextState		= pCurrentState->OnPacket( pPacket );
	if( NULL != pNextState && 
		pCurrentState != pNextState )
	{
		This->pState		= pNextState;
	}
}

} /* Login */ } /* Systems */ } /* pattern */
