//
// Created by Aaron Hanna on 4/9/20.
// Copyright (c) 2020 Aaron Hanna. All rights reserved.
//

#ifndef PROTOTYPEEXAMPLE_MAZEFACTORY_HPP
#define PROTOTYPEEXAMPLE_MAZEFACTORY_HPP


#include "Room.hpp"

class MazeFactory {
public:
    MazeFactory(Room*);
    ~MazeFactory();

    virtual Room* makeRoom();

private:
    Room* _prototypeRoom;
};


#endif //PROTOTYPEEXAMPLE_MAZEFACTORY_HPP
