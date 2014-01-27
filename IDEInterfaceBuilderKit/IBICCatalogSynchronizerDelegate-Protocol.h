/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBICCatalogSynchronizerDelegate <NSObject>
- (void)catalogSynchronizer:(id)arg1 didApplyMutationToModel:(id)arg2;
- (void)catalogDidRecoverFromFailureByReplaceContentWithContentFromDisk:(id)arg1 result:(id)arg2;
- (void)catalogWillRecoverFromFailureByReplaceContentWithContentFromDisk:(id)arg1;
- (void)catalogSynchronizerDidDetectExternalChangesOnDisk:(id)arg1;
- (void)catalogSynchronizer:(id)arg1 didCompleteSynchronizingWithStatus:(long long)arg2 error:(id)arg3;
@end
