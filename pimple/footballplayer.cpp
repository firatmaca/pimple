#include "footballplayer.h"
#include "teams.h"
struct footballplayer::pimpl{

    teams team;

};

footballplayer::footballplayer() : mp (new pimpl)
{

}

footballplayer::~footballplayer() {}

void footballplayer::WhoIsTheBestPlayer()
{
    this->mp->team.Barcelona();
    this->mp->team.BayernMunih();
}

