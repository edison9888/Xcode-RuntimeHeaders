/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

#import "NSControlTextEditingDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"

@class NSArray, NSButton, NSDictionary, NSMenu, NSMutableArray, NSMutableDictionary, NSSearchField, NSSplitView, NSString, NSTableColumn, NSTextField, NSView, SFAuthorizationView, XCDistributedBuildsSet, XCDistributedBuildsTableView;

@interface XCDistributedBuildsPrefsModule : PBXPreferencesPaneModule <NSControlTextEditingDelegate, NSTableViewDataSource>
{
    NSButton *_shareMyComputerCheckbox;
    SFAuthorizationView *_authorizationView;
    NSButton *_distributeBuildsToCheckbox;
    NSSearchField *_searchField;
    NSMenu *_searchFieldMenuTemplate;
    NSSplitView *_splitView;
    NSView *_setsSubview;
    XCDistributedBuildsTableView *_setsTable;
    NSTableColumn *_setUseTableColumn;
    NSTableColumn *_setNameTableColumn;
    NSButton *_newSet;
    NSButton *_deleteSet;
    NSButton *_duplicateSet;
    BOOL _bonjourSetIsSelected;
    NSView *_computersSubview;
    XCDistributedBuildsTableView *_computersTable;
    NSTableColumn *_computerNameTableColumn;
    NSTableColumn *_computerCompilersTableColumn;
    NSTableColumn *_computerOSTableColumn;
    NSTableColumn *_computerStatusTableColumn;
    NSButton *_newComputer;
    NSButton *_deleteComputer;
    NSButton *_refreshComputers;
    NSTextField *_osTextField;
    NSTextField *_compilersTextField;
    NSTextField *_authorizationCommentTextField;
    NSString *_searchString;
    long long _searchConstraint;
    BOOL _settingVolunteerForDNB;
    BOOL _settingVolunteerForDistcc;
    NSMutableArray *_sets;
    NSMutableDictionary *_allSetComputers;
    NSMutableArray *_selectedSetsComputers;
    NSArray *_viaPopupItemsArray;
    NSString *_selectedDistributedBuildsViaMode;
    NSDictionary *_viaPopupItemsByIdentifier;
    XCDistributedBuildsSet *_bonjourSet;
    BOOL _observingRemoteHostsChanged;
}

- (void)viewWasInstalled;
- (void)_windowDidResignKey:(id)arg1;
- (void)cancelChanges;
- (void)moduleWindowWillClose:(id)arg1;
- (void)viewWillBeRemoved;
- (void)moduleViewOrWindowWillBeRemoved;
- (void)viewDidLoad;
- (struct CGSize)minModuleSize;
- (void)awakeFromNib;
- (BOOL)_needsChange3ColumnsTo4Fix;
- (void)dealloc;
- (id)init;
- (id)selectedDistributedBuildsViaMode;
- (void)setSelectedDistributedBuildsViaMode:(id)arg1;
- (BOOL)_updateRecruiter:(BOOL)arg1;
- (BOOL)_isViewingDistCCHosts;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)authorizationViewDidDeauthorize:(id)arg1;
- (void)authorizationViewDidAuthorize:(id)arg1;
- (BOOL)tableViewShouldSetFont:(id)arg1;
- (unsigned long long)tableView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)tableView:(id)arg1 willAbortEditingColumn:(long long)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 createRowsFromPasteboard:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_statusColumnAttributedStringForHost:(id)arg1;
- (id)_osColumnAttributedStringForHost:(id)arg1;
- (id)_compilersColumnAttributedStringForHost:(id)arg1;
- (id)_nameColumnAttributedStringForHost:(id)arg1;
- (id)_attributedCompilerVersionStringsAsSingleStringForHost:(id)arg1;
- (id)_attributedAutocachedStringFor:(id)arg1 isValid:(BOOL)arg2;
- (id)_attributedNewStringToCacheFor:(id)arg1 isValid:(BOOL)arg2;
- (id)_attributedNewStringFor:(id)arg1 isValid:(BOOL)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)_tableView:(id)arg1 shouldApplyString:(id)arg2 toRow:(long long)arg3;
- (void)constrainSearch:(id)arg1;
- (void)searchComputersTable:(id)arg1;
- (void)refreshComputers:(id)arg1;
- (void)_stopMonitoringDistCCHosts;
- (void)_startMonitoringDistCCHosts;
- (void)deleteComputer:(id)arg1;
- (void)newComputer:(id)arg1;
- (void)duplicateSet:(id)arg1;
- (void)deleteSet:(id)arg1;
- (void)newSet:(id)arg1;
- (void)distributeBuilds:(id)arg1;
- (id)compilersTextField;
- (id)osTextField;
- (id)refreshComputersButton;
- (id)deleteComputerButton;
- (id)newComputerButton;
- (id)computerStatusTableColumn;
- (id)computerOSTableColumn;
- (id)computerCompilersTableColumn;
- (id)computerNameTableColumn;
- (id)computersTable;
- (id)computersSubview;
- (id)duplicateSetButton;
- (id)deleteSetButton;
- (id)newSetButton;
- (id)setNameTableColumn;
- (id)setUseTableColumn;
- (id)setsTable;
- (id)setsSubview;
- (id)splitView;
- (id)searchFieldMenuTemplate;
- (id)searchField;
- (id)distributeBuildsToCheckbox;
- (void)_updateManagerDistributeBuilds;
- (void)_updateManagerHosts;
- (long long)_alphabetizeSetAtIndex:(long long)arg1;
- (id)_uniqueNameInSetsForString:(id)arg1 startingNumber:(long long)arg2;
- (BOOL)_anySetsUsed;
- (void)_remoteServersDidChange:(id)arg1;
- (void)_removeComputer:(id)arg1 fromSet:(id)arg2;
- (void)_addComputer:(id)arg1 toSet:(id)arg2;
- (void)_setSetAtIndex:(unsigned long long)arg1 currentlyUsed:(BOOL)arg2;
- (void)_setSetAtIndex:(unsigned long long)arg1 currentlyUsed:(BOOL)arg2 inSets:(id)arg3;
- (id)_unavailableLocalizedName;
- (BOOL)_shouldEndEditingBeepIfNo:(id)arg1;
- (void)_updateLocalhostUI;
- (BOOL)_isSetsSubviewCollapsed;
- (void)_rebuildComputersTable;
- (id)_rebuiltSelectedSetsComputers;
- (id)_localizedStatusStringForStatus:(id)arg1;
- (id)_sortedComputerNamesPerCurrentDescriptors:(id)arg1;
- (id)_selectedSets;
- (id)_copyLocalizedSuffix;
- (id)_bonjourAttributedStringName;
- (id)_bonjourLocalizedName;
- (id)_addHostWithSpec:(id)arg1 hostType:(int)arg2;
- (id)_hostWithSpec:(id)arg1 hostType:(int)arg2;
- (void)shareMyComputer:(id)arg1;
- (void)_restrictedActionFailureAlertWithText:(id)arg1 comment:(id)arg2;
- (id)authorizationView;
- (id)shareMyComputerCheckbox;
- (void)_restoreFromSerialization;
- (void)_serializeSets;
- (id)_serializeSets:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

