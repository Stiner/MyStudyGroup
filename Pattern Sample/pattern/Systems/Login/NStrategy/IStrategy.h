#pragma once

namespace pattern { namespace Systems { namespace Login {
namespace NCommand {

class IStrategy // ���
{
public:
	BLANK					IStrategy() {}
	virtual					~IStrategy() {}

	virtual void 			Execute(Packet * pPacket) = 0;

};

} /* NCommand */
} /* Login */ } /* Systems */ } /* pattern */
