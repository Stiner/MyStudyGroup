#pragma once

namespace pattern { namespace Systems { namespace Login {
namespace NState {

class IState // ¾ðÁ¦
{
public:
	BLANK					IState() {}
	virtual					~IState() {}

	virtual IState *		OnPacket(Packet * pPacket) = 0;

};

} /* NState */
} /* Login */ } /* Systems */ } /* pattern */
