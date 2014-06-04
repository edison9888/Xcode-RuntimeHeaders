/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEMediaRepository.h>

#import "IDEDefaultMediaLibrary-Protocol.h"

@class IDEFileReferenceContainerObserver, IDETimedInvalidatableObjectCache, NSSet, NSString;

@interface IDEContainerContentsMediaRepository : IDEMediaRepository <IDEDefaultMediaLibrary>
{
    IDEFileReferenceContainerObserver *_observer;
    id <DVTInvalidation> _containerContentObservationToken;
    IDETimedInvalidatableObjectCache *_timedCache;
}

+ (id)mediaRepositoryForContainer:(id)arg1 fileDataTypes:(id)arg2;
+ (id)cleanupHandlerBlock;
+ (id)updateHandlerBlock;
+ (id)containerObserverIdentifer;
+ (id)allSupportedMediaFileDataTypes;
+ (void)cleanupFileReferenceContainerObserverResult:(id)arg1 forPath:(id)arg2;
+ (id)handleFileReferenceContainerObserverChange:(long long)arg1 forPath:(id)arg2 withDataType:(id)arg3;
+ (void)discardMediaRepositoryForContainerObserver:(id)arg1;
+ (id)mediaRepositoryForContainerObserver:(id)arg1;
+ (id)containerObserverToRepositoryMap;
- (void).cxx_destruct;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (void)willRegisterMediaRepositoryObserver;
- (void)didUnregisterMediaRepositoryObserver;
@property(readonly) NSSet *types;
- (id)resources;
- (void)primitiveInvalidate;
- (void)_startObserving;
- (id)initWithContainerObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

