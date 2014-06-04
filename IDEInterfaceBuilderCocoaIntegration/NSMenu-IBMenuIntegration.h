/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMenu.h"

@interface NSMenu (IBMenuIntegration)
- (BOOL)ibCanSupportIdentifierProperty;
@property long long ibArchivedSystemMenuType;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (void)setIbInspectedTitle:(id)arg1;
- (id)ibInspectedTitle;
- (void)setIbShadowedItemArray:(id)arg1;
- (id)ibShadowedItemArray;
- (id)ibPasteboardTypes;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (BOOL)ibRepresentsMainMenuOrDescendantOfMainMenu;
- (BOOL)ibRepresentsMainMenu;
- (BOOL)ibSupportsMultipleSimultaneousEditors;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
@end

