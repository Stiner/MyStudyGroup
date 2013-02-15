#pragma once

#include "./IState.h"

namespace pattern { namespace Systems { namespace Login {
namespace NState {

class Logining
:	public					IState
{
public:
	BLANK					Logining() {}
	virtual					~Logining() {}

	virtual IState *		OnPacket(Packet * pPacket);

};

IState *
Logining::OnPacket(Packet * pPacket)
{
}

} /* NState */
} /* Login */ } /* Systems */ } /* pattern */
