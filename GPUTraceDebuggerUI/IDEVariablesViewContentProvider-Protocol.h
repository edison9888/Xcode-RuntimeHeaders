/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTInvalidation-Protocol.h"
#import "NSObject-Protocol.h"

@protocol IDEVariablesViewContentProvider <NSObject, DVTInvalidation>
@property(readonly) BOOL supportsShowingRawValues;
@property(readonly) id nodeSortComparator;
@property(readonly) id <IDEVariablesViewContextMenuDelegate> contextMenuDelegate;
- (id)contextNameForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (BOOL)deleteNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)providerWasInstalledForVariablesView:(id)arg1;

@optional
@property(readonly) BOOL loadingNewVariablesInBackground;
- (int)formatterSizeStyle;
- (BOOL)showCellExpansion;
- (int)compoundNodeFormatterModeForItem:(id)arg1 atRow:(long long)arg2;
- (id)statusCellsDictionary;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (void)quickLookProviderForDataValue:(id)arg1 quickLookProviderHandler:(id)arg2;
- (void)newRootFromChildrenWasInstalled;
- (void)nodeWasDoubleClicked:(id)arg1 row:(long long)arg2 column:(long long)arg3;
- (id)scopePopUpTitleForScopeItem:(long long)arg1;
@end

