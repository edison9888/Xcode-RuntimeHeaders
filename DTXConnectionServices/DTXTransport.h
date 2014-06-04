/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DTXResourceTracker, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface DTXTransport : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSObject<OS_dispatch_queue> *_handlerGuard;
    DTXResourceTracker *_tracker;
    id _dataReceivedHandler;
    int _status;
    NSObject<OS_dispatch_semaphore> *_waitForResume;
    BOOL _resumed;
}

+ (BOOL)recognizesURL:(id)arg1;
+ (id)schemes;
@property(readonly, nonatomic) DTXResourceTracker *resourceTracker; // @synthesize resourceTracker=_tracker;
@property int status; // @synthesize status=_status;
@property(readonly) NSArray *localAddresses;
@property(copy, nonatomic) id dataReceivedHandler;
- (void)disconnect;
- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(id)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalAddress:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)canTransmit;
- (BOOL)canReceive;

@end

