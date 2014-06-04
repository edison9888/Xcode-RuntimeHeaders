/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBAutolayoutItem-Protocol.h"

@class NSObject<IBIDEAutolayoutItem>;

@protocol IBIDEAutolayoutItem <IBAutolayoutItem>
@property(readonly, nonatomic) BOOL ibShouldPropagateFramesDuringFrameDecision;
@property(readonly, nonatomic) BOOL ibShouldIgnoreMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnoreAmbiguity;
@property(nonatomic) BOOL ibExternalWasMisplacedOnLastSave;
@property(nonatomic) BOOL ibExternalHadAnyAmbiguityOnLastSave;
@property(nonatomic) BOOL ibExternalHasUninitializedAutolayoutAmbiguityStatus;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ibDesignableContentItem;
- (void)ibPrimitiveRemoveConstraintsFromCandidates:(id)arg1 andFromDocument:(id)arg2 allowingCascadingDelete:(BOOL)arg3;
- (void)ibPrimitiveRemoveConstraintsFromCandidateListOnly:(id)arg1 keepingInDocument:(id)arg2;
- (void)ibPrimitiveAddConstraintsToCandidateListOnly:(id)arg1 thatAreAlreadyInDocument:(id)arg2;
- (void)ibInvalidateCachedInstalledConstraints;
- (void)ibVerifyConstraintsAreSortedInDocument:(id)arg1;
- (void)ibRemoveCandidateConstraints:(id)arg1;
- (void)ibAddCandidateConstraints:(id)arg1 offInEmptyConfigurationAndOnInConfiguration:(id)arg2;
- (id)ibEffectiveItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (BOOL)ibPrefersToVerticallyResizeWithContainer;
- (BOOL)ibPrefersToHorizontallyResizeWithContainer;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (CDStruct_c519178c)ibInsetToDesignableContentArea;
- (id)ibContainerWidgetType;
- (id)ibWidgetType;
@end

