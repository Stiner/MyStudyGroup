#pragma once

#include "./ICommand.h"

namespace pattern { namespace Systems { namespace Login {
namespace NCommand {

class Request
:	public					ICommand
{
public:
	struct					Context : public Packet
	{
		unsigned short		nType;
	};
public:
	BLANK					Request() {}
	virtual					~Request() {}

	virtual void			Execute(Packet * pPacket) = 0;

};

} /* NCommand */
} /* Login */ } /* Systems */ } /* pattern */
