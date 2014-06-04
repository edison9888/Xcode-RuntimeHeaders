/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEBotSupportingDocument.h>

@class DVTObservingToken, IDEBot, NSArray;

@interface IDEBotEditorDocument : IDEBotSupportingDocument
{
    DVTObservingToken *_lastExecutionObservingToken;
    BOOL _isFetchingSummaryData;
    BOOL _needsRefetchOfSummaryData;
    IDEBot *_bot;
    unsigned long long _minimumSummaryGraphColumnsToFetch;
    NSArray *_summaryGraphData;
}

+ (id)keyPathsForValuesAffectingBotExecution;
@property(retain, nonatomic) NSArray *summaryGraphData; // @synthesize summaryGraphData=_summaryGraphData;
@property(nonatomic) unsigned long long minimumSummaryGraphColumnsToFetch; // @synthesize minimumSummaryGraphColumnsToFetch=_minimumSummaryGraphColumnsToFetch;
@property(retain, nonatomic) IDEBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)_fetchSummaryGraphData;
- (void)refreshSummaryGraphData;
- (id)botExecution;
- (void)editorDocumentDidClose;
- (id)displayName;
- (void)setFileURL:(id)arg1;
- (void)_botWillBeRemovedsFromXcode:(id)arg1;

@end

