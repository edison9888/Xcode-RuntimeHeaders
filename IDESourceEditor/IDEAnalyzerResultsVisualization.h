/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTTextVisualization.h"

@class DVTMapTable, IDEAnalyzerResultsExplorer, NSArray;

@interface IDEAnalyzerResultsVisualization : DVTTextVisualization
{
    DVTMapTable *_controlFlowPathsByStep;
    struct CGRect _cachedBounds;
    IDEAnalyzerResultsExplorer *_explorer;
}

@property(readonly) __weak IDEAnalyzerResultsExplorer *explorer; // @synthesize explorer=_explorer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawOverTextInRect:(struct CGRect)arg1;
- (void)refresh;
@property(readonly) NSArray *allControlFlowPaths;
- (id)initWithExplorer:(id)arg1;

@end

