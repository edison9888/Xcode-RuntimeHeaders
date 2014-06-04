/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBICAbstractCatalogItem.h"

#import "IDEInspectorMatching-Protocol.h"

@class IBICTransientUIStateRepository, NSImage, NSString;

@interface IBICAbstractCatalogItem (DisplayAdditions) <IDEInspectorMatching>
+ (id)pasteboardTypes;
+ (id)pasteboardType;
+ (void)swizzleInDisplayOverrides;
- (void)notifyAboutDisplayPropertyChange:(id)arg1;
- (id)plistDescriptionForIctool;
- (BOOL)shouldIncludeInPlistDescriptionForIctool;
- (void)populatePlistWithDescriptionForIctool:(id)arg1;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (void)prepareToReatatchForDragWithContext:(id)arg1;
- (void)prepareToDetatchForDragWithContext:(id)arg1;
- (void)appendToCatalog:(id)arg1 afterDecodingFromPasteboardWithCompanions:(id)arg2;
@property(readonly, getter=isDraggable) BOOL draggable;
- (id)quickLookPreviewItem;
- (id)itemsForOpeningInExternalEditor;
- (id)documentTransientUIStateForKey:(id)arg1;
- (void)setDocumentTransientUIState:(id)arg1 forKey:(id)arg2;
@property(readonly) IBICTransientUIStateRepository *documentTransientUIStateRepository;
- (id)firstAncestorOrReceiverVisibleInOutline;
- (void)performDeleteInDocument:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)validatedFileNameForProposedDisplayName:(id)arg1;
- (BOOL)isDisplayNameEditable;
@property(readonly) BOOL isSelectableInDetailArea;
@property(readonly) BOOL displaysInOutlineView;
@property(readonly) BOOL displaysChildrenInOutlineView;
@property(readonly) NSImage *icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

