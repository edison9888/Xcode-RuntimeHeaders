/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AnimationParameters : NSObject
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
- (id)initWithStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2;

@end

