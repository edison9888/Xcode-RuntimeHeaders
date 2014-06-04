/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSArray, NSComboBox;

@interface SKInspectorNodeProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_sceneKeyPath;
    IDEInspectorKeyPath *_selectionKeyPath;
    NSArray *_sortedResults;
}

- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (id)comboBox;

@end

