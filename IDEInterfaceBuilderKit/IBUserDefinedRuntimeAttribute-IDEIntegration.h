/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBUserDefinedRuntimeAttribute.h"

#import "IBDocumentArchiving-Protocol.h"

@class NSString;

@interface IBUserDefinedRuntimeAttribute (IDEIntegration) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (id)ibCoerceToDescriptivePListWithStrictness:(long long)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

