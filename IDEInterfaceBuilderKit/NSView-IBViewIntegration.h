/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "IBIDEAutolayoutItem-Protocol.h"

@class NSArray, NSObject<IBAutolayoutItem>, NSObject<IBIDEAutolayoutItem>, NSSet, NSString, NSValue;

@interface NSView (IBViewIntegration) <IBIDEAutolayoutItem>
+ (id)ibFrameSizeAttributeName;
+ (id)ibFrameOriginAttributeName;
+ (id)ibConstraintsRelationshipName;
+ (id)ibSubviewsRelationshipName;
+ (id)keyPathsForValuesAffectingIbInspectedHasDesignTimeIntrinsicContentSize;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultDesignTimeIntrinsicContentHeight;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultDesignTimeIntrinsicContentWidth;
+ (id)keyPathsForValuesAffectingIbInspectedDesignTimeIntrinsicContentHeight;
+ (id)keyPathsForValuesAffectingIbInspectedDesignTimeIntrinsicContentWidth;
+ (id)keyPathsForValuesAffectingIbInspectedDoesNotHaveHasUninitializedAutolayoutAmbiguityStatus;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalContentCompressionResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalContentCompressionResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalContentHuggingPriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalContentHuggingPriority;
+ (unsigned long long)ibDefaultAutoresizingMaskForViewsUsingConstraints;
+ (id)keyPathsForValuesAffectingIbInstalledConstraints;
+ (void)_installPlaceholderInstrinsicContentSizeSupport;
+ (id)ibLayoutMetrics;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
+ (id)ibKeyPathsForXcode5ContentViewSubviews;
+ (id)ibKeyPathForXcode5ContentView;
+ (id)ibDefaultImageForInstance:(id)arg1;
@property(copy, nonatomic) id <IBOrderedCollection> ibSubviewCandidates;
- (void)ibSetFrame:(struct CGRect)arg1 whileBlockingForwardChangesToPropertyStorageInDocument:(id)arg2;
- (id)ibLocalPerConfigurationKeyPathsToSkipForCompiling;
- (void)setIbEvaluatedFrame:(struct CGRect)arg1 inEmptyConfigurationByClearingInAllOtherConfigurationsInDocument:(id)arg2;
- (void)ibLiveViewClassDidChange;
- (BOOL)ibHasDesignableCustomClass;
- (void)ibInvalidateLiveViewsBundleInDocument:(id)arg1;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (void)setIbInspectedHasDesignTimeIntrinsicContentSize:(BOOL)arg1;
- (BOOL)ibInspectedHasDesignTimeIntrinsicContentSize;
- (double)ibInspectedDefaultDesignTimeIntrinsicContentHeight;
- (double)ibInspectedDefaultDesignTimeIntrinsicContentWidth;
- (void)setIbInspectedDesignTimeIntrinsicContentHeight:(id)arg1;
- (id)ibInspectedDesignTimeIntrinsicContentHeight;
- (void)setIbInspectedDesignTimeIntrinsicContentWidth:(id)arg1;
- (void)_setIbInspectedDesignTimeIntrinsicContentComponent:(id)arg1 componentIsWidth:(BOOL)arg2;
- (id)ibInspectedDesignTimeIntrinsicContentWidth;
- (BOOL)ibInspectedDoesNotHaveHasUninitializedAutolayoutAmbiguityStatus;
- (void)setIbInspectedVerticalContentCompressionResistancePriority:(double)arg1;
- (double)ibInspectedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
- (void)setIbInspectedHorizontalContentCompressionResistancePriority:(double)arg1;
- (double)ibInspectedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
- (void)setIbInspectedVerticalContentHuggingPriority:(double)arg1;
- (double)ibInspectedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
- (void)setIbInspectedHorizontalContentHuggingPriority:(double)arg1;
- (double)ibInspectedHorizontalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
- (void)ibChangeInspectedContentPriorityInBlock:(id)arg1;
- (void)ibChangePrimitiveContentPriorityInBlock:(id)arg1;
- (id)ibSubviewSubtreeDescriptionWithAdditionalDescriptionsBlock:(id)arg1;
- (id)ibDefaultSubtreeDescription;
- (id)ibLoggingDescription;
- (id)ibObjectsForSubgroupWithIdentifier:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (id)ibSubgroupIdentifiers;
- (void)ibDidCreateRuntimeConstraint:(id)arg1 referencingItem:(id)arg2 context:(id)arg3;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL ibExternalWasMisplacedOnLastSave;
@property(nonatomic) BOOL ibExternalHadAnyAmbiguityOnLastSave;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguity;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguity;
- (BOOL)ibCanHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg1;
- (BOOL)ibChildView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg2;
@property(nonatomic) BOOL ibExternalHasUninitializedAutolayoutAmbiguityStatus;
@property(readonly, nonatomic) BOOL ibShouldIgnoreMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnoreAmbiguity;
- (BOOL)ibHasAnyExplicitAutolayoutStatusInConfiguration:(id)arg1 withStorage:(id)arg2;
- (id)ibAllAutolayoutStatusKeyPaths;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
@property(readonly, nonatomic) BOOL ibShouldPropagateFramesDuringFrameDecision;
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (id)ibEffectiveContainingViewForConstraintsWithLayoutInfo:(id)arg1;
- (id)ibEffectiveConstrainableViewWithLayoutInfo:(id)arg1;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)ibArbitrationUnitWasCreatedWithReceiverAsRootUnderParent:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (id)ibSuperviewOfView:(id)arg1 inDocument:(id)arg2;
- (id)ibWindow:(SEL)arg1 forUpdatingConstraintsInDocument:(id *)arg2;
- (BOOL)ibPropogatedTranslatesAutoresizingConstraintsOfChildView:(id)arg1 forCopyOfChildView:(id)arg2;
- (unsigned long long)ibAmbiguityStatusInEngine:(id)arg1;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (BOOL)ibPrefersToVerticallyResizeWithContainer;
- (BOOL)ibPrefersToHorizontallyResizeWithContainer;
- (BOOL)ibShouldApplyConstraintsWhenAutoresizingByDefault;
- (BOOL)ibCanHaveAnyConstraintsIgnoringOwnedLayoutWhereApplicable:(BOOL)arg1;
- (BOOL)ibCanHaveBaselineConstraintsIgnoringOwnedLayout:(BOOL)arg1;
- (BOOL)ibCanHaveCenterInContainerAlignmentConstraints;
- (BOOL)ibCanHaveEdgeOrCenterAlignmentConstraintsIgnoringOwnedLayout:(BOOL)arg1;
- (BOOL)ibCanHaveEqualSizingConstraints;
- (BOOL)ibCanHaveEdgeConstraintsToContainer;
- (BOOL)ibCanHaveSpacingConstraints;
- (BOOL)ibCanHaveAbsoluteSizingConstraints;
- (BOOL)ibHasOwnedLayout;
- (BOOL)_ibHasOwnedLayoutInDocument:(id)arg1;
- (id)ibEffectiveItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (void)ibViewNonRecursiveDisableAutolayoutInDocument:(id)arg1;
- (void)ibDisableAutolayoutInDocument:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (void)_clearXcode5AutolayoutFeatureState;
- (BOOL)ibShouldInvalidateConstraintsForChangingValueOfKeyPath:(id)arg1 from:(id)arg2 to:(id)arg3 inDocument:(id)arg4;
- (void)ibUpdateTranslatingAutoresizingMaskIntoConstraintsStateInDocument:(id)arg1;
- (void)setIbInspectedTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (BOOL)ibInspectedTranslatesAutoresizingMaskIntoConstraints;
- (void)setIbExternalLastInspectedTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (id)ibExternalLastInspectedTranslatesAutoresizingMaskIntoConstraints;
- (id)ibLastInspectedTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (void)ibUpdateAutoresizingMaskAfterChangingTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
@property(nonatomic) BOOL ibExternalTranslatesAutoresizingMaskIntoConstraints;
- (id)ibTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (void)ibVerifyConstraintsAreSortedInDocument:(id)arg1;
- (void)ibRemoveCandidateConstraints:(id)arg1;
- (void)ibAddCandidateConstraints:(id)arg1 offInEmptyConfigurationAndOnInConfiguration:(id)arg2;
- (void)ibPrimitiveRemoveConstraintsFromCandidates:(id)arg1 andFromDocument:(id)arg2 allowingCascadingDelete:(BOOL)arg3;
- (void)ibPrimitiveRemoveConstraintsFromCandidateListOnly:(id)arg1 keepingInDocument:(id)arg2;
- (void)ibPrimitiveAddConstraintsToCandidateListOnly:(id)arg1 thatAreAlreadyInDocument:(id)arg2;
- (void)ibSortConstraintChildrenAndCandidatesInDocument:(id)arg1;
- (id)ibConstraintComparatorForDocument:(SEL)arg1;
- (void)ibPropertyStorage:(id)arg1 didTurnOffCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)_ibDidTurnOnOrOffCandidate:(id)arg1 forRelationship:(id)arg2 inConfiguration:(id)arg3 fromStorage:(id)arg4 onOrOffString:(id)arg5;
- (void)ibPropertyStorage:(id)arg1 didTurnOffForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibInvalidateReferencedInstalledConstraintsAfterChangingRelationship:(id)arg1;
- (void)ibPropertyStorage:(id)arg1 didChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
- (void)ibPropertyStorage:(id)arg1 willChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
- (id)ibViewsWithReferencingConstraintChangesWhenChangingConstraintsFrom:(id)arg1 to:(id)arg2;
- (id)ibCandidateConstraintsInDocument:(id)arg1;
- (void)ibInvalidateCachedInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
- (id)ibConstraintsMetadataKeyInDocument:(id)arg1;
- (id)ibConstraintsOrderedFromBackToFront;
- (id)ibPossiblyStaleLastDrawnConstraintOrder;
- (void)setIbPossiblyStaleLastDrawnConstraintOrder:(id)arg1;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
- (BOOL)ibIsValidConstraintItem;
- (BOOL)ibShouldArchiveMenuItems;
- (BOOL)ibShouldArchiveAutolayoutPropertiesWithNSViewProperties;
- (void)ibUnarchiveAutolayoutProperties:(id)arg1;
- (void)ibArchiveAutolayoutProperties:(id)arg1;
- (void)_ibUnarchiveConstraints:(id)arg1;
- (void)ibArchiveConstraints:(id)arg1;
- (void)ibUnarchiveTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (void)ibArchiveTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (void)ibUnarchiveAutoresizingMask:(id)arg1;
- (void)ibArchiveAutoresizingMask:(id)arg1;
- (BOOL)ibShouldPersistAutoresizingMaskInDocument:(id)arg1;
- (void)ibUnarchiveFrame:(id)arg1;
- (void)ibArchiveFrame:(id)arg1;
- (void)ibUnarchiveSubviews:(id)arg1;
- (void)ibArchiveSubviews:(id)arg1;
- (void)setIbArchivedSubviews:(id)arg1 withConfigurationPropertyStorage:(id)arg2;
- (id)ibArchivedSubviewsWithConfigurationPropertyStorage:(id)arg1;
- (void)ibDrawBoundsIndicatorInCoordinateSpaceOfView:(id)arg1;
- (BOOL)ibWantsBoundsIndicatorAlways;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (BOOL)ibWantsSolidEditorSelectionHighlight;
- (Class)ibViewRendererClass;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (void)ibCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibWillPutObjects:(id)arg1 withDescendants:(id)arg2 onPasteboard:(id)arg3 fromDocument:(id)arg4 context:(id)arg5;
- (id)ibViewFromPasteboardImage:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (void)ibSetValue:(id)arg1 forInsertingPasteboardObjectsIntoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibIdentifiedViewsFromPasteboardImageResources:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibWillArbitrateInArbitrationUnit:(id)arg1;
- (BOOL)ibVerifyFrameAndBoundsIntegrality;
- (void)ibIntegralizeFrameOrBoundsIfNeeded:(struct CGRect)arg1 callingBlockIfIntegralizationWasNeeded:(id)arg2;
- (void)setIbContentSizeForEditorVerification:(struct CGSize)arg1;
- (struct CGSize)ibContentSizeForEditorVerification;
- (void)ibPopulateAmbiguityWarnings:(id)arg1 forOrientationsWithMask:(unsigned long long)arg2 withAutolayoutStatus:(id)arg3 context:(id)arg4;
- (void)ibPopulateMisplacementWarnings:(id)arg1 withAutolayoutStatus:(id)arg2;
- (BOOL)ibShouldCoalesceAmbiguityWarningsForAutolayoutStatus:(id)arg1;
- (void)ibPopulateWarnings:(id)arg1 forAutolayoutIssuesInDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibIssueOverlappingViewWarning:(id)arg1 forSibling:(id)arg2 withParentView:(id)arg3 inDocument:(id)arg4 withComputationContext:(id)arg5;
- (BOOL)ibShouldGenerateOverlappingViewsWarningsInDocument:(id)arg1;
- (BOOL)ibIsClippingContent;
@property(copy, nonatomic) NSValue *ibExternalDesignTimeIntrinsicContentSize;
- (void)setIbAssociatedDesignTimeIntrinsicContentSize:(id)arg1;
- (id)ibAssociatedDesignTimeIntrinsicContentSize;
- (void)ibPreserveLayoutFrameDuring:(id)arg1;
- (long long)ibPreferredResizeDirection;
- (struct CGSize)ibPreferredSizeRespectingNearestLegalBoundsSize;
- (struct CGSize)ibNearestLegalBoundsSize;
- (struct CGPoint)ibPreferredOriginForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredLayoutSize;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibIntrinsicContentFrameSize;
- (void)ibConstrainBoundsToNearestLegalSize;
- (void)ibSuggestLayoutAllowingResizingTopLevelView:(BOOL)arg1;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1 allowResizingTopLevelView:(BOOL)arg2;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1 andOrigin:(struct CGPoint)arg2 allowResizingTopLevelView:(BOOL)arg3;
- (void)ibSetFrameSizePreferringToAllowTopLevelViewResizing:(struct CGSize)arg1 withSuggestedFrameOrigin:(struct CGPoint)arg2;
- (void)ibSetFrameSize:(struct CGSize)arg1 withSuggestedFrameOrigin:(struct CGPoint)arg2 allowResizingTopLevelView:(BOOL)arg3;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (void)ibWillSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (BOOL)ibUseFrameDecisionForSuggestingLayout;
- (BOOL)ibShouldUpdateConstraintsForSuggestLayoutInDocument:(id)arg1;
- (void)ibDidFinishTrackingFrameWithLayoutGuideMatches:(id)arg1 inDocument:(id)arg2;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1;
- (BOOL)ibIsDistanceFromSubviewEdge:(unsigned long long)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg3;
- (BOOL)ibIsEdge:(unsigned long long)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg3;
- (void)ibResumeAutoResizingSubviews:(id)arg1;
- (id)ibStopAutoResizingSubviewsWhileGrowingFromKnob:(long long)arg1 inDocument:(id)arg2;
- (BOOL)ibPrefersFlippedFrameCoordinates;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (BOOL)ibIsSizable;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsMovable;
- (BOOL)ibIsUserMovable;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (Class)ibTrackerClass;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect ibLayoutFrame;
- (struct CGRect)ibLayoutBoundsForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(long long)arg2;
- (double)ibBaselineAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long ibBaselineCount;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)_ibMaximumSizeUsingWidgetType;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)_ibMinimumSizeUsingWidgetType;
- (struct CGSize)_ibExtremeSizeForWidgetType:(id)arg1 maximum:(BOOL)arg2;
- (CDStruct_c519178c)ibFrameworkLayoutInset;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
- (CDStruct_c519178c)ibLayoutInsetForWidgetType:(id)arg1;
- (id)ibContainerWidgetType;
- (id)ibWidgetType;
- (CDStruct_c519178c)ibInsetToDesignableContentArea;
- (id)ibLayoutManagerForUnitTesting;
- (void)ibPopulateResourceReferences:(id)arg1 withValueToVariantSetMap:(id)arg2;
- (void)ibEnumerateDerivedInspectedConfigurablePropertyDefinitions:(id)arg1;
- (id)ibAllConfigurationsWithValuesForInspectedConfigurableProperty:(id)arg1;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (struct CGSize)frameSize;
- (struct CGPoint)frameOrigin;
- (void)ibRemoveUserGuide:(id)arg1;
- (void)ibAddUserGuide:(id)arg1;
- (void)setIbExternalUserGuides:(id)arg1;
- (id)ibExternalUserGuides;
@property(copy, nonatomic) NSArray *ibShadowedSubviews;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ibDesignableContentItem;
- (id)ibDesignableContainerViewInDocument:(id)arg1;
@property(readonly, nonatomic) NSView *ibDesignableContentView;
@property(copy) NSView *ibArchivedDesignableContentView;
- (void)ibRegisterUndoActionInDocument:(id)arg1 forChangeToKeyPath:(id)arg2 fromValue:(id)arg3;
- (void)setIbFrameSizeHeightForUndo:(id)arg1;
- (void)setIbFrameSizeWidthForUndo:(id)arg1;
- (void)setIbFrameOriginYForUndo:(id)arg1;
- (void)setIbFrameOriginXForUndo:(id)arg1;
- (void)ibDidAddWithDefaultChildrenToDocument:(id)arg1;
- (BOOL)ibShouldIncludeKeyPath:(id)arg1 inInitialChildrenForDocument:(id)arg2;
- (id)ibObjectsToReparentWhenAddingOrRemovingXcode5ContentView;
@property(retain) NSView *ibXcode5ContentView;
- (id)ibXcode5ContentViewToUseForDocument:(id)arg1;
- (void)ibVerifyXcode5ContentViewIsCorrectClassForDocument:(id)arg1;
- (void)ibVerifyXcode5ContentViewWithDocument:(id)arg1;
- (void)ibDocumentDidChangeDevelopmentTarget:(id)arg1;
- (id)ibContextLabelForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsAttributeSearchLocationReplaceable:(id)arg1 inDocument:(id)arg2;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (BOOL)ibShouldArchiveConfigurableProperty:(id)arg1 inConfiguration:(id)arg2 withStorage:(id)arg3;
- (void)ibArchiveFrameForConfiguration:(id)arg1 withArchiver:(id)arg2;
- (id)ibArchiveKeyForConfigurableRelationship:(id)arg1;
- (void)ibForwardValueForAttribute:(id)arg1 toConfigurationPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (id)ibLocalPerConfigurationToManyChildRelationshipKeyPaths;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (BOOL)ibSelectingChildWithMouseRequiresEditorConsent:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibSecondaryHitTestingRectsForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibHitRectsForConstraint:(id)arg1 inFrameController:(id)arg2;
- (void)ibDidRemoveChildren:(id)arg1 fromDocument:(id)arg2;
- (void)ibWillRemoveFromDocument:(id)arg1 previouslyMemberOfGroup:(id)arg2;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibShouldIncludeKeyPathInIbtoolPrintingOutput:(id)arg1;
- (void)ibTurnOffChildren:(id)arg1 inConfiguration:(id)arg2 document:(id)arg3;
- (void)ibTurnOffConstraintsFromChildren:(id)arg1 inConfiguration:(id)arg2 document:(id)arg3;
- (BOOL)ibCanTurnOffChildren:(id)arg1 document:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibAttributeSnapshot;
- (void)ibTakePastedAttributes:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (id)ibWidgetTypeForDefaultLabel;
- (BOOL)ibWantsEditorCanvasFrameContentBorder;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibEditorClass;

// Remaining properties
@property(readonly, nonatomic) double baselineOffsetFromBottom; // @dynamic baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGRect bounds; // @dynamic bounds;
@property(readonly, nonatomic) NSArray *constraints; // @dynamic constraints;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped; // @dynamic flipped;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize; // @dynamic intrinsicContentSize;
@property(readonly, nonatomic) NSArray *subviews; // @dynamic subviews;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview; // @dynamic superview;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints; // @dynamic translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id window; // @dynamic window;
@end

