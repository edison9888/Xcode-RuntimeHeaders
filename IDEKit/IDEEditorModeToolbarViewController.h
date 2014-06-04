/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTToolbarViewController.h"

@class DVTBindingToken, DVTObservingToken, DVTRolloverTracker;

@interface IDEEditorModeToolbarViewController : DVTToolbarViewController
{
    DVTObservingToken *_editorModeObservingToken;
    DVTObservingToken *_editorSubmodeObservingToken;
    DVTBindingToken *_workspaceIsIdleToken;
    id _segmentedControllVersionEditorEnabledToken;
    DVTRolloverTracker *_segmentedControllRolloverTracker;
}

- (void).cxx_destruct;
- (void)_showVersionLogMode:(id)arg1;
- (void)_showVersionBlameMode:(id)arg1;
- (void)_showVersionComparisonMode:(id)arg1;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_setEditorModeForMenuItem:(id)arg1;
- (void)_updateVersionEditorMenuForSubmode:(int)arg1;
- (void)_setVersionEditorSubmode:(int)arg1;
- (void)_setEditorMode:(int)arg1;
- (long long)_stateForMenuItemTag:(long long)arg1 editorModeClass:(Class)arg2 classAccessor:(SEL)arg3 instanceAccessor:(SEL)arg4;
- (id)_editorModeViewController;
- (id)menuForMenuFormRepresentation;
- (void)primitiveInvalidate;
- (id)_create1010AndLaterControl;
- (id)_createPre1010Control;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
- (id)_imageFactoryForImageNamed:(id)arg1;
- (id)_editorVersionLogsImageFactory;
- (id)_editorVersionComparisonImageFactory;
- (id)_editorVersionBlameImageFactory;
- (id)_editorGeniusImageFactory;
- (id)_editorBasicImageFactory;

@end

