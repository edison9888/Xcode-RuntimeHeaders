/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "IBDocumentArchiving-Protocol.h"

@class NSColor, NSString;

@interface SCNViewTemplate : NSView <IBDocumentArchiving>
{
    BOOL _jitteringEnabled;
    BOOL _playing;
    BOOL _loops;
    BOOL _autoenablesDefaultLighting;
    BOOL _allowsCameraControl;
    BOOL _ibWantsMultisampling;
    BOOL _encodeAsRuntimeInstance;
    NSColor *_backgroundColor;
    NSString *_ibSceneName;
}

@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(nonatomic) BOOL ibWantsMultisampling; // @synthesize ibWantsMultisampling=_ibWantsMultisampling;
@property(nonatomic) BOOL allowsCameraControl; // @synthesize allowsCameraControl=_allowsCameraControl;
@property(copy, nonatomic) NSString *ibSceneName; // @synthesize ibSceneName=_ibSceneName;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL autoenablesDefaultLighting; // @synthesize autoenablesDefaultLighting=_autoenablesDefaultLighting;
@property(nonatomic) BOOL loops; // @synthesize loops=_loops;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled; // @synthesize jitteringEnabled=_jitteringEnabled;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (Class)classForCoder;
- (id)ibTypeNameForDefaultLabel;
- (id)ibRuntimeClassName;
- (void)drawRect:(struct CGRect)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

