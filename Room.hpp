//
// Created by Aaron Hanna on 4/9/20.
// Copyright (c) 2020 Aaron Hanna. All rights reserved.
//

#ifndef PROTOTYPEEXAMPLE_ROOM_HPP
#define PROTOTYPEEXAMPLE_ROOM_HPP


class Room {
public:
    Room();
    virtual Room* clone();
};

class trapRoom : public Room {
    trapRoom();
    Room * clone() override{
        return new trapRoom(*this);
    }
};


#endif //PROTOTYPEEXAMPLE_ROOM_HPP
