/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditor.h"

#import "DVTReplacementViewDelegate-Protocol.h"

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, DVTTabChooserView, NSArray, NSButton, NSImageView, NSString, NSTextField, XCSBot, XCSIntegration, XCSUIIntegrationEditorHeaderView;

@interface XCSBotSupportingEditor : IDEEditor <DVTReplacementViewDelegate>
{
    XCSIntegration *_integration;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_choiceUpdateToken;
    DVTObservingToken *_botUpdateToken;
    DVTObservingToken *_integrationUpdateToken;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    DVTObservingToken *_currentSelectedDocumentLocationsUpdateToken;
    DVTObservingToken *_currentSelectedItemsUpdateToken;
    NSTextField *_integrationLabel;
    NSTextField *_integrationTimestamp;
    DVTTabChooserView *_tabChooserView;
    NSButton *_downloadsButton;
    NSButton *_settingsButton;
    XCSUIIntegrationEditorHeaderView *_headerView;
    NSImageView *_headerImageView;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (id)botSupportingEditorBackgroundColor;
@property __weak NSImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property __weak XCSUIIntegrationEditorHeaderView *headerView; // @synthesize headerView=_headerView;
@property __weak NSButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property __weak NSButton *downloadsButton; // @synthesize downloadsButton=_downloadsButton;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property __weak NSTextField *integrationTimestamp; // @synthesize integrationTimestamp=_integrationTimestamp;
@property __weak NSTextField *integrationLabel; // @synthesize integrationLabel=_integrationLabel;
@property(retain) DVTObservingToken *currentSelectedItemsUpdateToken; // @synthesize currentSelectedItemsUpdateToken=_currentSelectedItemsUpdateToken;
@property(retain) DVTObservingToken *currentSelectedDocumentLocationsUpdateToken; // @synthesize currentSelectedDocumentLocationsUpdateToken=_currentSelectedDocumentLocationsUpdateToken;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain) DVTObservingToken *integrationUpdateToken; // @synthesize integrationUpdateToken=_integrationUpdateToken;
@property(retain) DVTObservingToken *botUpdateToken; // @synthesize botUpdateToken=_botUpdateToken;
@property(retain) DVTObservingToken *choiceUpdateToken; // @synthesize choiceUpdateToken=_choiceUpdateToken;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(readonly, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)updateIntegrationLabels:(id)arg1;
- (void)editButton:(id)arg1;
- (void)downloadsButton:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (id)botIntegration;
@property(readonly, nonatomic) XCSBot *bot;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)selectChoice:(id)arg1;
- (id)integrationInProgressChoices;
- (id)choices;
- (void)watchIntegrationForCompletion:(id)arg1;
- (void)updateViewsWithIntegration:(id)arg1;
- (void)resizeLabelToFit:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

