/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDESourceControlWorkingCopyConfiguration, IDESourceControlWorkingTree, NSAttributedString, NSMenuItem, NSString;

@interface IDESourceControlWorkingCopyMenuObject : NSObject
{
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    NSMenuItem *_menuItem;
    NSString *_workingCopyName;
    NSString *_currentBranchName;
    NSAttributedString *_menuItemAttributedTitle;
}

+ (id)titleForWorkingCopyName:(id)arg1 branchName:(id)arg2 dimmingIcons:(BOOL)arg3 includeIconInTitles:(BOOL)arg4;
+ (id)_iconAsAttributedStringForImage:(id)arg1;
+ (id)_branchImage;
+ (id)_workingCopyConfigurationImage;
+ (id)_workingCopyImage;
@property(readonly) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(readonly) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
- (void).cxx_destruct;
- (void)dealloc;
- (void)menuDidClose;
- (void)teardown;
@property(readonly) NSMenuItem *menuItem;
- (void)loadMenuItem;
- (id)initWithWorkingCopyConfiguration:(id)arg1;
- (id)initWithWorkingTree:(id)arg1;

@end
