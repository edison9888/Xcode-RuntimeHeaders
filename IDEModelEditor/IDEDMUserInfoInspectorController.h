/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorViewController.h"

#import "NSTableViewDelegate-Protocol.h"
#import "XDTableViewScrollDelegate-Protocol.h"

@class DVTBorderedView, DVTGradientImageButton, NSArrayController, NSString, XDTableView;

@interface IDEDMUserInfoInspectorController : IDEInspectorViewController <NSTableViewDelegate, XDTableViewScrollDelegate>
{
    NSArrayController *userInfoDictionaryController;
    DVTGradientImageButton *removeButton;
    DVTGradientImageButton *addButton;
    DVTBorderedView *controlBar;
    XDTableView *tableView;
}

- (void).cxx_destruct;
- (void)delete:(id)arg1;
- (void)removeUserInfoKey:(id)arg1;
- (void)addUserInfoKey:(id)arg1;
- (void)numberOfUserInfoKeysChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)tableView:(id)arg1 didScrollWheel:(id)arg2;
- (void)_resize;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

