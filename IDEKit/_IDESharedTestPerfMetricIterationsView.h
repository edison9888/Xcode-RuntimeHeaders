/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class IDESharedTestPerfMetricIterationsGraphView, _IDESharedTestPerfMetricIterationNumberView;

@interface _IDESharedTestPerfMetricIterationsView : NSView
{
    id _numberClickedCallback;
    _IDESharedTestPerfMetricIterationNumberView *_selectedView;
    NSView *_firstView;
    IDESharedTestPerfMetricIterationsGraphView *_graphView;
}

@property __weak IDESharedTestPerfMetricIterationsGraphView *graphView; // @synthesize graphView=_graphView;
@property(retain) NSView *firstView; // @synthesize firstView=_firstView;
@property(retain) _IDESharedTestPerfMetricIterationNumberView *selectedView; // @synthesize selectedView=_selectedView;
@property(copy) id numberClickedCallback; // @synthesize numberClickedCallback=_numberClickedCallback;
- (void).cxx_destruct;
- (void)layoutViews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@end

