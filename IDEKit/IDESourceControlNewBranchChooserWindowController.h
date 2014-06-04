/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlNewBranchWindowController.h>

#import "IDESourceControlWindowController-Protocol.h"

@class IDESourceControlBranch, IDESourceControlSwitchOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSString, NSWindow;

@interface IDESourceControlNewBranchChooserWindowController : IDESourceControlNewBranchWindowController <IDESourceControlWindowController>
{
    IDEWorkspace *_workspace;
    IDESourceControlSwitchOperationInfo *_operationInfo;
    NSWindow *_parentWindow;
    IDESourceControlBranch *_currentBranch;
    id <DVTInvalidation> _token;
    BOOL _inProgress;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    id _completionBlock;
}

@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) IDESourceControlSwitchOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)endSheet;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
- (void)branchChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayError:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

