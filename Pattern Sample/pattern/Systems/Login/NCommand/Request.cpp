#include "StdAfx.h"

#include "./Request.h"

namespace pattern { namespace Systems { namespace Login {
namespace NCommand {

Request::Request()
{
	This->pStrategy			= NStrategy::STATIC()->MSSQL();
	if()
}

void
Request::SetOracle()
{
	This->pStrategy			= NStrategy::STATIC()->Oracle();
}

void		
Request::Execute(Packet * pPacket)
{
	Contents::NFacade::aaa::Execute();
	Context * pContext		= (Context *)( pPacket );
	//
	//This->pStrategy->Execute( pContext );
}

} /* NCommand */
} /* Login */ } /* Systems */ } /* pattern */
