//
// Created by Aaron Hanna on 4/9/20.
// Copyright (c) 2020 Aaron Hanna. All rights reserved.
//

#include "MazeFactory.hpp"

MazeFactory::MazeFactory(Room* r) {
    this->_prototypeRoom = r;
}

MazeFactory::~MazeFactory() {
    delete _prototypeRoom;
}

Room *MazeFactory::makeRoom() {
    return _prototypeRoom->clone();
}


