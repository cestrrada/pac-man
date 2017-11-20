//
//  Nodes.hpp
//  PAC-MAN 2017
//
//  Created by Carlos Estrada on 11/18/17.
//  Copyright © 2017 Carlos Estrada. All rights reserved.
//

#ifndef Nodes_hpp
#define Nodes_hpp
#include "Platform.hpp"
#include <memory>
#endif /* Nodes_hpp */

class Node {
    RectangleShape mazenode;
    
public:
    bool isUpValid, isDownValid, isLeftValid, isRightValid;
    
    Node();
    void setPosition(Vector2f position);
    Vector2f getPosition();
    void setValidDirections(bool up, bool down, bool left, bool right);
};