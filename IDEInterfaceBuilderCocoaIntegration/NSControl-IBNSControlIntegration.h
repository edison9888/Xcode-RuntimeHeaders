/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSControl.h"

@interface NSControl (IBNSControlIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedCell;
+ (id)keyPathsForValuesAffectingIbInspectedLineBreakMode;
+ (id)keyPathsForValuesAffectingIbInspectedUserInterfaceLayoutDirection;
+ (id)keyPathsForValuesAffectingIbInspectedTruncatesLastVisibleLine;
+ (id)keyPathsForValuesAffectingIbInspectedContinuous;
+ (id)keyPathsForValuesAffectingIbInspectedBaseWritingDirection;
+ (id)keyPathsForValuesAffectingIbInspectedRefusesFirstResponder;
+ (id)keyPathsForValuesAffectingIbInspectedEnabled;
+ (id)keyPathsForValuesAffectingIbHasSingleCell;
+ (id)keyPathsForValuesAffectingIbInspectedControlSize;
+ (id)keyPathsForValuesAffectingIbInspectedSetsMaxLayoutWidthAtFirstLayout;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (id)ibLocalSearchableNumericAttributeKeyPaths;
- (void)unarchiveCell:(id)arg1;
- (void)archiveCell:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibAutolayoutSafeSizeToFit;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (BOOL)ibIdentifierPropertyCanConflictsWithObject:(id)arg1;
- (id)ibInspectedCell;
- (void)setIbInspectedLineBreakMode:(long long)arg1;
- (long long)ibInspectedLineBreakMode;
- (void)setIbInspectedUserInterfaceLayoutDirection:(long long)arg1;
- (long long)ibInspectedUserInterfaceLayoutDirection;
- (void)setIbInspectedTruncatesLastVisibleLine:(long long)arg1;
- (long long)ibInspectedTruncatesLastVisibleLine;
- (void)setIbInspectedContinuous:(long long)arg1;
- (long long)ibInspectedContinuous;
- (void)setIbInspectedBaseWritingDirection:(long long)arg1;
- (long long)ibInspectedBaseWritingDirection;
- (void)setIbInspectedRefusesFirstResponder:(long long)arg1;
- (long long)ibInspectedRefusesFirstResponder;
- (void)setIbInspectedEnabled:(long long)arg1;
- (long long)ibInspectedEnabled;
- (id)ibEquivalentSourceForToOneOutlet:(id)arg1;
- (void)ibCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibHasSingleCell;
- (void)ibPopulateObjectsForFloatingPanels:(id)arg1;
- (void)setIbInspectedControlSize:(unsigned long long)arg1;
- (unsigned long long)ibInspectedControlSize;
- (id)ibExposedElusiveDescendantsKeyPaths;
- (long long)ibPreferredResizeDirection;
- (BOOL)ibIsClippingContent;
- (struct CGSize)ibPreferredControlSize;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(long long)arg2;
- (double)ibBaselineAtIndex:(long long)arg1;
- (double)ibTransformCellBaseline:(double)arg1;
- (long long)ibBaselineCount;
- (id)ibWidgetType;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (Class)ibEditorClass;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)setIbMirrorLayoutDirectionWhenInternationalizing:(long long)arg1;
- (long long)ibMirrorLayoutDirectionWhenInternationalizing;
- (BOOL)ibInspectedCanInspectSetsMaxLayoutWidthAtFirstLayout;
- (void)setIbInspectedSetsMaxLayoutWidthAtFirstLayout:(BOOL)arg1;
- (BOOL)ibInspectedSetsMaxLayoutWidthAtFirstLayout;
- (void)setIbExternalSetsMaxLayoutWidthAtFirstLayout:(BOOL)arg1;
- (BOOL)ibExternalSetsMaxLayoutWidthAtFirstLayout;
- (void)ibSwizzledNSControlEncodeWithCoder:(id)arg1;
- (void)setIbShadowedAllowsExpansionToolTips:(BOOL)arg1;
- (BOOL)ibShadowedAllowsExpansionToolTips;
- (void)ibTakePastedAttributes:(id)arg1;
- (void)ibTakeSnapshotValues:(id)arg1;
- (id)ibAttributeSnapshot;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalToOneRelationshipsKeyPaths;
@end

