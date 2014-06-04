/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBInspectorViewController.h"

#import "IBBindingSliceDelegate-Protocol.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTStackView_ML, IBBindingSuggestedKeyPathProvider, NSArray, NSMutableArray, NSMutableSet, NSScrollView, NSString;

@interface IBBindingsInspector : IBInspectorViewController <IBBindingSliceDelegate>
{
    NSScrollView *_scrollView;
    DVTStackView_ML *_mainView;
    IBBindingSuggestedKeyPathProvider *_keyPathProvider;
    NSArray *_controllers;
    NSArray *_controllerInfo;
    NSArray *_connections;
    NSMutableArray *_bindingSlicePool;
    NSMutableSet *_expandedBindings;
    NSMutableArray *_currentBindingSlices;
    struct CGRect _frameOfSliceOfInterest;
    id _previousSelection;
    unsigned long long _categoryIndex;
    DVTNotificationToken *_didAddConnectionToken;
    DVTNotificationToken *_didRemoveConnectionToken;
    DVTNotificationToken *_willRemoveObjectToken;
    DVTNotificationToken *_indexDidChangeToken;
    DVTDelayedInvocation *_refreshInvalidator;
    struct {
        unsigned int _establishingBinding:1;
        unsigned int _refreshing:1;
        unsigned int _reserved:30;
    } _ibBindingsInspectorFlags;
}

+ (BOOL)supportsMultipleObjectInspection;
@property(readonly, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(retain) IBBindingSuggestedKeyPathProvider *keyPathProvider; // @synthesize keyPathProvider=_keyPathProvider;
- (void).cxx_destruct;
- (void)unbindDocumentBindingNamed:(id)arg1;
- (void)bindDocumentBindingNamed:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5;
- (id)expandedBindings;
- (void)refresh;
- (void)setNeedsRefresh;
- (void)assertBindingsIntegrity;
- (void)layoutCategory:(id)arg1 addingBindings:(id)arg2;
- (id)fullDescriptionForBindingInfo:(id)arg1;
- (void)_updateNibConnectors;
- (void)_updateNibConnectorsForObject:(id)arg1;
- (void)_updateControllerArray;
- (void)returnBindingSliceToPool:(id)arg1;
- (id)bindingSliceFromPool;
- (void)bindingSlice:(id)arg1 didChangeExpansionState:(BOOL)arg2;
- (id)categoryViewWithCategoryString:(id)arg1;
- (void)rebuildKeyPathProvider;
- (void)documentWillRemoveObject:(id)arg1;
- (void)viewWillUninstall;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)viewDidInstall;
- (void)setContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

