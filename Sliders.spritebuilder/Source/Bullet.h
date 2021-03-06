//
//  Bullet.h
//  Sliders
//
//  Created by Maria Luisa on 3/31/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Hero.h"

@interface Bullet : CCSprite

@property (nonatomic, assign) NSInteger attackPower;
@property (nonatomic, assign) NSInteger impulse;
@property (nonatomic, weak) Hero* targetHero;

-(void)impulseToTarget;
-(void)fire;

@end
