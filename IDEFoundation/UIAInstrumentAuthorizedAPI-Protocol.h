/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DTXAllowedRPC-Protocol.h"

@protocol UIAInstrumentAuthorizedAPI <DTXAllowedRPC>
- (void)notifyMonitoredPidIsDead:(id)arg1;
- (id)performTaskOnHost:(id)arg1 withArguments:(id)arg2 timeout:(id)arg3;
- (void)scriptDidThrowException:(id)arg1;
- (void)agentIsGone:(id)arg1;
- (void)stopPlayingWithException:(id)arg1;
- (void)updateBundleStatus:(id)arg1;
- (void)updateScriptStatus:(id)arg1;
- (void)agentIsReady;
@end

