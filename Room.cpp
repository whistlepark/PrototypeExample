//
// Created by Aaron Hanna on 4/9/20.
// Copyright (c) 2020 Aaron Hanna. All rights reserved.
//

#include "Room.hpp"

Room::Room() {}

Room *Room::clone() {
    return new Room(*this);
}
