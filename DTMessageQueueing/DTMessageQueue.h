/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DTXConnection.h"

#import "DTMessageQueueAuthorizedAPI-Protocol.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface DTMessageQueue : DTXConnection <DTMessageQueueAuthorizedAPI>
{
    NSObject<OS_dispatch_queue> *_undeliveredGuard;
    NSMutableArray *_undeliveredMessages;
    id <DTMessageQueueDelegate> _delegate;
}

- (void)peerRaisedException:(id)arg1;
- (void)logWithFormat:(const char *)arg1;
- (BOOL)loggingEnabled;
- (void)setLoggingEnabled:(id)arg1;
- (void)setOutgoingQueueSyncThreshold:(unsigned long long)arg1;
- (double)timeIntervalDifference;
- (void)stop;
- (id)createServiceForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)returnToTarget:(id)arg1 withSelector:(SEL)arg2 dispatch:(SEL)arg3 withArguments:(id)arg4;
- (id)dispatch:(SEL)arg1 withArguments:(id)arg2;
- (id)allMessages;
- (id)nextMessage;
- (void)pushMessages:(id)arg1;
- (void)pushMessage:(id)arg1;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 asServer:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

