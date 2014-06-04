/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GPUGlobalStateManager : NSObject
{
    BOOL _showGroupDisplayableCallCount;
}

+ (id)sharedGlobalStateManager;
@property(readonly, nonatomic) BOOL showGroupDisplayableCallCount; // @synthesize showGroupDisplayableCallCount=_showGroupDisplayableCallCount;
@property(nonatomic) BOOL showRedundantCallIssues;
@property(nonatomic) BOOL programMetricsAsPercentage;
- (BOOL)showGroupDrawCallCount;
@property(nonatomic) BOOL hideGroupMarkerCalls;
@property(nonatomic) BOOL hideEmptyMarkerGroups;
@property(nonatomic) BOOL compactTextMode;
- (id)_init;
- (id)init;

@end

