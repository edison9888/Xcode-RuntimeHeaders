/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, SKEColorRampView;

@interface SKEColorRampProperty : IDEInspectorProperty
{
    SKEColorRampView *_colorRamp;
    IDEInspectorKeyPath *_valueKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (double)baseline;

@end
