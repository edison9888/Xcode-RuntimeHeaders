/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DYGuestAppSession.h"

@interface DYGLGuestAppSession : DYGuestAppSession
{
    BOOL _trapOnGLErrors;
    BOOL _checkGLErrors;
    BOOL _breakOnGLErrors;
}

@property(nonatomic) BOOL breakOnGLErrors; // @synthesize breakOnGLErrors=_breakOnGLErrors;
@property(nonatomic) BOOL checkGLErrors; // @synthesize checkGLErrors=_checkGLErrors;
@property(nonatomic) BOOL trapOnGLErrors; // @synthesize trapOnGLErrors=_trapOnGLErrors;
- (id)newCaptureSessionWithArchive:(id)arg1;
- (id)queryContextsInfo;
- (id)queryForGraphicsAPIUsage;
- (void)_sendAdditionalConfigurations;
- (void)_modifyTraceConfigurationDictionary:(id)arg1;
- (void)_handleTransportMessage:(id)arg1;

@end

