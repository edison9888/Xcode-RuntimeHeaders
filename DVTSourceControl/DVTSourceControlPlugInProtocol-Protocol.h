/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTSourceControlPlugInProtocol <NSObject>
- (void)createWorkingCopyFromRepository:(id)arg1 location:(id)arg2 branchAndTagLocations:(id)arg3 localAddress:(id)arg4 completionBlock:(id)arg5;
- (void)validateAuthenticationOfRemoteRepository:(id)arg1 location:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(id)arg4;
- (void)addRemoteRepository:(id)arg1 withName:(id)arg2 toRepository:(id)arg3 completionBlock:(id)arg4;
- (void)listRemoteRepositoriesForRepository:(id)arg1 completionBlock:(id)arg2;
- (void)listBranchesOfRepository:(id)arg1 branchAndTagLocations:(id)arg2 completionBlock:(id)arg3;
- (void)revisionOfLocation:(id)arg1 inRepository:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(id)arg4;
- (void)headRevisionOfRepository:(id)arg1 completionBlock:(id)arg2;
- (void)upgradeWorkingCopy:(id)arg1 completionBlock:(id)arg2;
- (void)baseRevisionOfWorkingCopy:(id)arg1 completionBlock:(id)arg2;
- (void)currentLocationOfWorkingCopy:(id)arg1 completionBlock:(id)arg2;
- (void)historyForWorkingCopy:(id)arg1 fromRevision:(id)arg2 toRevision:(id)arg3 maximumLogItems:(long long)arg4 withCompletionBlock:(id)arg5;
- (void)forceUpdateWorkingCopy:(id)arg1 fromRepository:(id)arg2 completionBlock:(id)arg3;
- (void)scanForWorkingCopiesInPotentialWorkingCopies:(id)arg1 completionBlock:(id)arg2;
- (void)scanForWorkingCopiesInFolderPaths:(id)arg1 traversingUp:(BOOL)arg2 completionBlock:(id)arg3;
- (void)sourceControlSystemWithCompletionBlock:(id)arg1;
@end

