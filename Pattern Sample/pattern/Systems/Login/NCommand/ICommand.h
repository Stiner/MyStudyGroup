#pragma once

namespace pattern { namespace Systems { namespace Login {
namespace NCommand {

class ICommand // ¹«¾ùÀ»
{
public:
	BLANK					ICommand() {}
	virtual					~ICommand() {}

	virtual ICommand *		Execute(Packet * pPacket) = 0;

};

} /* NCommand */
} /* Login */ } /* Systems */ } /* pattern */
