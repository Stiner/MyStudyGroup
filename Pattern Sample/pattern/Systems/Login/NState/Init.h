#pragma once

#include "./IState.h"

namespace pattern { namespace Systems { namespace Login {
namespace NState {

class Init
:	public					IState
{
public:
	BLANK					Init() {}
	virtual					~Init() {}

	virtual IState *		OnPacket(Packet * pPacket);

};

IState *
Init::OnPacket(Packet * pPacket)
{
	ICommand * pCommand		= m_CommandMap.find(pPacket->nCommandNo);
	if( NULL == pCommand )
	{
		// error
		return NULL;
	}

	pCommand->Execute( pPacket );

	return STATIC()->Logining();
}

} /* NState */
} /* Login */ } /* Systems */ } /* pattern */
