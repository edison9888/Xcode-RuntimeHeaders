/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTBorderedView.h>

#import "DVTIssueDisplayingView-Protocol.h"

@class NSButton, NSDictionary, NSImage, NSImageView, NSMenu, NSPopUpButton, NSString, NSTextField;

@interface DVTDisclosureHeaderView : DVTBorderedView <DVTIssueDisplayingView>
{
    NSButton *_disclosureButton;
    NSTextField *_titleField;
    NSPopUpButton *_actionMenuButton;
    NSButton *_closeButton;
    NSImageView *_iconView;
    NSButton *_issueIconButton;
    NSDictionary *_issueInfoDictionary;
    double _lastHeightForBackgroundLayer;
    struct CGLayer *_backgroundLayer;
    double _distanceFromLeftEdgeToDisclosureButton;
    id _closeClickHandler;
    double _rightEdgeInset;
    unsigned long long _disclosureButtonPosition;
    BOOL _drawsBackground;
    BOOL _disclosed;
    BOOL _disclosable;
    BOOL _draggable;
    double _preferredHeight;
    id <DVTDisclosureHeaderViewDelegate> _delegate;
}

@property __weak id <DVTDisclosureHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(readonly) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic, getter=isDisclosed) BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(getter=isDraggable) BOOL draggable; // @synthesize draggable=_draggable;
@property(nonatomic, getter=isDisclosable) BOOL disclosable; // @synthesize disclosable=_disclosable;
@property double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(copy) NSDictionary *issueInfoDictionary; // @synthesize issueInfoDictionary=_issueInfoDictionary;
@property(nonatomic) unsigned long long disclosureButtonPosition; // @synthesize disclosureButtonPosition=_disclosureButtonPosition;
@property double distanceFromLeftEdgeToDisclosureButton; // @synthesize distanceFromLeftEdgeToDisclosureButton=_distanceFromLeftEdgeToDisclosureButton;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGLayer *)_createBackgroundLayerForCurrentHeight;
- (struct CGRect)backgroundRect;
@property BOOL drawsBottomBorder;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property(copy) NSImage *icon;
- (void)fireIssueIconButtonHandlerBlock:(id)arg1;
@property(readonly) struct CGRect grabRect;
@property(retain) NSMenu *actionMenu;
@property(retain) NSTextField *titleField;
@property(copy) NSString *title;
- (void)userToggledDisclosureState:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)insertCloseButtonWithAccessibilityDescription:(id)arg1 withClickHandler:(id)arg2;
- (void)insertCloseButtonWithClickHandler:(id)arg1;
- (void)closeButtonWasClicked:(id)arg1;
- (void)insertCloseButtonWithTarget:(id)arg1 action:(SEL)arg2 withAccessibilityDescription:(id)arg3;
- (void)insertCloseButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (void)_configureIssueIconButton;
- (void)_configureIconView;
- (id)defaultTitleField;
- (id)defaultCloseButton;
- (void)_configureActionButton;
@property(retain) NSButton *disclosureButton;
- (id)defaultDisclosureButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

