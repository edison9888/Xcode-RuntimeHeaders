/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IDETestableProvider <NSObject>
@property(readonly) NSString *name;
@property(readonly) NSArray *testables;
- (id)testableForBlueprint:(id)arg1;
@end

