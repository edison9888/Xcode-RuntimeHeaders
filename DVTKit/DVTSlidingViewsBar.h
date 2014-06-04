/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTBarBackground.h>

@class DVTClippedTabsIndicator, DVTSlidingAnimation, NSArray;

@interface DVTSlidingViewsBar : DVTBarBackground
{
    double _draggedItemWidth;
    DVTClippedTabsIndicator *_rightClipIndicator;
    DVTSlidingAnimation *_animation;
    long long _dropIndex;
    long long _dragSourceIndex;
}

@property(nonatomic) long long dragSourceIndex; // @synthesize dragSourceIndex=_dragSourceIndex;
@property(nonatomic) long long dropIndex; // @synthesize dropIndex=_dropIndex;
@property(readonly) DVTSlidingAnimation *animation; // @synthesize animation=_animation;
@property(readonly) DVTClippedTabsIndicator *rightClipIndicator; // @synthesize rightClipIndicator=_rightClipIndicator;
- (void).cxx_destruct;
- (void)updateButtons;
- (void)_ensureButtonIsInViewHierarchy:(id)arg1;
- (void)viewWillBeginDragging:(id)arg1;
- (id)viewPinnedToOverflowIndicator;
- (void)moveSlidingViewToCurrentDropIndex:(id)arg1;
- (BOOL)isSliding;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)updateDropTarget:(id)arg1;
- (double)slidingWidthForView:(id)arg1;
- (double)widthOfDraggingInfo:(id)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (BOOL)reorderSlidingView:(id)arg1 fromMouseDownEvent:(id)arg2;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (id)_lastDraggedEventFollowing:(id)arg1;
- (void)slideButtonsIntoPlace;
- (unsigned long long)dropIndexFromLocalPoint:(struct CGPoint)arg1;
- (unsigned long long)dropIndexFromDraggingInfo:(id)arg1;
- (void)refreshButtons;
- (void)draggedSlidingView:(id)arg1;
- (void)reorderedSlidingView:(id)arg1;
- (double)buttonBottomOffset;
- (double)paddingBetweenButtons;
- (struct CGRect)_constrainProposedButtonFrame:(struct CGRect)arg1;
- (double)minSlidingViewX;
- (double)minButtonX;
- (double)maxButtonX;
- (double)maxButtonXWithClipIndicator;
- (double)maxButtonXWithoutClipIndicator;
- (unsigned long long)lastNonSlidingViewIndex;
@property(readonly) NSArray *buttons;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

