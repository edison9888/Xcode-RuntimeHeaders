/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewController.h>

#import "IBDocumentArchiving-Protocol.h"

@class NSString;

@interface IBNSPageController : IBNSViewController <IBDocumentArchiving>
{
    long long _transitionStyle;
}

+ (Class)ibViewClass;
@property long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)effectiveStoryboardIdentifierPrefix;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

