#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H
#include "memory"
#include "memory.h"
#include "iostream"

class footballplayer
{
public:
    footballplayer();
    ~footballplayer();
    void WhoIsTheBestPlayer();
private:
    struct pimpl;
    std::unique_ptr<pimpl> mp;
};

#endif // FOOTBALLPLAYER_H
