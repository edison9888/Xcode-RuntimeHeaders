/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDispatchLock, DVTLogAspect, NSCountedSet;

@interface DVTMemorySnapshot : NSObject
{
    DVTLogAspect *_aspect;
    NSCountedSet *_incrementsForSnapshotTypes;
    DVTDispatchLock *_incrementLock;
}

+ (id)_baseOutputFolder;
+ (id)snapshotForLogAspect:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)takeVmmapSnapshotWithLogLevel:(int)arg1 logFormat:(id)arg2;
- (void)_takeVmmapSnapshotWithLogLevel:(int)arg1 toFilePath:(id)arg2 logString:(id)arg3;
- (void)cleanupBeforeTakingSnapshotsWithLogLevel:(int)arg1 logFormat:(id)arg2;
- (unsigned long long)_newIncrementForSnapshotType:(id)arg1;
- (id)initWithAspect:(id)arg1;

@end

