/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEiOSSupportCore/IDELaunchiPhoneLauncher.h>

#import "DTMISProcessControlServiceAuthorizedAPI-Protocol.h"

@class DTXChannel, NSString;

@interface IDELaunchWithoutDebuggeriPhoneLauncher : IDELaunchiPhoneLauncher <DTMISProcessControlServiceAuthorizedAPI>
{
    DTXChannel *_launchServiceChannel;
}

@property(retain) DTXChannel *launchServiceChannel; // @synthesize launchServiceChannel=_launchServiceChannel;
- (void).cxx_destruct;
- (void)_terminatePid:(int)arg1;
- (void)pidDiedCallback:(id)arg1;
- (void)launchWithoutDebugger:(id)arg1 dispatchTarget:(id)arg2 finishedHandler:(id)arg3;
- (void)_cancelProcessControlChannel;
- (id)_instrumentsProcessControlChannel;
- (void)terminate;
- (BOOL)postCheckinActionShouldFinishOperationWorker;
- (BOOL)shouldSetupDebugServer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

