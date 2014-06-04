/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class DSMQuery, DVTPerformanceMetric, DVTTableView, IDEDocSearchField_FieldEditor, IDEDocSearchResultsContext, NSArray, NSString, NSTrackingArea;

@interface IDEDocSearchResultsWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSArray *_searchResults;
    NSArray *_resultGroups;
    DSMQuery *_currentQuery;
    IDEDocSearchField_FieldEditor *_fieldEditor;
    NSTrackingArea *_trackingArea;
    IDEDocSearchResultsContext *_resultsContext;
    id _topHit;
    DVTPerformanceMetric *_perfMetric;
    unsigned long long _defaultSelectedRowIndex;
    DVTTableView *_resultsTableView;
    struct CGSize _hostWindowSize;
}

@property struct CGSize hostWindowSize; // @synthesize hostWindowSize=_hostWindowSize;
@property DVTTableView *resultsTableView; // @synthesize resultsTableView=_resultsTableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateWithFrameworkFilteredTokenResults:(id)arg1 extraTokenResults:(id)arg2 textResults:(id)arg3 fromQuery:(id)arg4 perfMetric:(id)arg5;
- (void)willBeginSearching;
- (void)updateResultsWithContext:(id)arg1;
- (id)bookmarksMatchingString:(id)arg1;
- (void)_tableViewAction:(id)arg1;
- (void)fieldEditorInsertNewLine:(id)arg1;
- (void)loadContentForClickedRow:(long long)arg1;
- (void)showAllResults;
- (void)reloadDataAndResetHoverRows;
- (void)close;
- (void)_loadContentForSearchResult:(id)arg1;
- (void)fieldEditorDidInsertTab:(id)arg1;
- (void)fieldEditorDidMoveDown:(id)arg1;
- (void)fieldEditorDidMoveUp:(id)arg1;
- (long long)_rowOfPreviousSelectableItemInTableRelativeToRow:(long long)arg1;
- (long long)_rowOfNextSelectableItemInTableRelativeToRow:(long long)arg1;
- (long long)_rowOfFirstSelectableItemInTable;
- (BOOL)_isItemSeparatorRow:(id)arg1;
- (BOOL)_isItemSelectable:(id)arg1;
- (void)_resetSelectedRowViewHoverState:(long long)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_updateWindowSizeToFitTable;
- (void)_updateWindowSizeForEmptyTable;
@property(readonly) BOOL isSelectableTableRowSelectedOrMousedOver;
- (void)loadWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

