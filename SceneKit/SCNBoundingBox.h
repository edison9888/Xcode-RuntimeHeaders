/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface SCNBoundingBox : NSObject
{
    struct SCNVector3 min;
    struct SCNVector3 max;
}

+ (id)SCNJSExportProtocol;
@property(nonatomic) struct SCNVector3 max; // @synthesize max;
@property(nonatomic) struct SCNVector3 min; // @synthesize min;
- (id)description;

@end

