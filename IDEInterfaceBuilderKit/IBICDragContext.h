/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IBICCatalogDocument, IBMutableIdentityDictionary, NSDictionary, NSMutableOrderedSet, NSString;

@interface IBICDragContext : NSObject <DVTInvalidation>
{
    IBMutableIdentityDictionary *_itemsToTargetParents;
    IBICCatalogDocument *_document;
    NSMutableOrderedSet *_itemsToRemove;
    IBMutableIdentityDictionary *_perItemUserInfo;
}

+ (void)initialize;
@property(readonly) IBMutableIdentityDictionary *perItemUserInfo; // @synthesize perItemUserInfo=_perItemUserInfo;
@property(readonly) NSDictionary *itemsToTargetParents; // @synthesize itemsToTargetParents=_itemsToTargetParents;
- (void).cxx_destruct;
- (void)applyScheduledTreeChanges;
- (void)applyScheduledAdditions;
- (void)applyScheduledRemovals;
- (void)scheduleRemovalOfItem:(id)arg1;
- (void)scheduleAditionOfItem:(id)arg1 toParent:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

