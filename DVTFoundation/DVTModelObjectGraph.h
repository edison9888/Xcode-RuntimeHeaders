/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface DVTModelObjectGraph : NSObject
{
    NSString *_name;
    NSOperationQueue *_asyncQueue;
    NSOperationQueue *_changeQueue;
    NSObject<OS_dispatch_queue> *_asyncDispatchQueue;
    NSObject<OS_dispatch_queue> *_changeDispatchQueue;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_updatedObjects;
    NSMutableSet *_deletedObjects;
    BOOL _coalescePending;
    BOOL _changeNotificationsAreSuspended;
    BOOL _postingChangeNotification;
    BOOL _additionalChangesPending;
}

@property BOOL changeNotificationsAreSuspended; // @synthesize changeNotificationsAreSuspended=_changeNotificationsAreSuspended;
@property(readonly) NSObject<OS_dispatch_queue> *changeDispatchQueue; // @synthesize changeDispatchQueue=_changeDispatchQueue;
@property(readonly) NSObject<OS_dispatch_queue> *asyncDispatchQueue; // @synthesize asyncDispatchQueue=_asyncDispatchQueue;
@property(readonly) NSOperationQueue *changeQueue; // @synthesize changeQueue=_changeQueue;
@property(readonly) NSOperationQueue *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)didDeleteModelObject:(id)arg1;
- (void)didUpdateModelObject:(id)arg1;
- (void)didInsertModelObject:(id)arg1;
- (void)performBlockCoalescingModelChanges:(id)arg1;
- (void)_processPendingChanges;
- (void)_locked_coalesceUpdates;
- (void)_coalescingTick;
- (void)_disassociateModelObject:(id)arg1;
- (void)_associateModelObject:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 asyncDispatchQueue:(id)arg2 changeDispatchQueue:(id)arg3;
- (id)initWithName:(id)arg1 asyncQueue:(id)arg2 changeQueue:(id)arg3;

@end

