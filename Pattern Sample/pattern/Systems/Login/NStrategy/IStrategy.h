#pragma once

namespace pattern { namespace Systems { namespace Login {
namespace NCommand {

class IStrategy // ¾î¶»°Ô
{
public:
	BLANK					IStrategy() {}
	virtual					~IStrategy() {}

	virtual void 			Execute(Packet * pPacket) = 0;

};

} /* NCommand */
} /* Login */ } /* Systems */ } /* pattern */
