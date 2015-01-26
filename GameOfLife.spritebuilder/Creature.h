//
//  Creature.h
//  GameOfLife
//
//  Created by Olivia Li on 1/25/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// store the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// store the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
