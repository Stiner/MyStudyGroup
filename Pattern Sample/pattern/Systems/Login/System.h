#pragma once

namespace pattern { namespace Systems { namespace Login {

class System
{
public:
	BLANK					System();
	BLANK					~System();

	virtual void			OnPacket( Packet * pPacket );

private:
	struct					Private;
	Private *				This;
};

} /* Login */ } /* Systems */ } /* pattern */
