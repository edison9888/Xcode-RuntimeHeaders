/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IDEInspectorKeyPath, NSDictionary, NSString, NSTextField;

@interface DBGStaticEnumerationInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_staticText;
    NSDictionary *_titleByValue;
    BOOL _hasBitMask;
    NSTextField *_textField;
    long long _bitMask;
}

@property long long bitMask; // @synthesize bitMask=_bitMask;
@property BOOL hasBitMask; // @synthesize hasBitMask=_hasBitMask;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)_configureEnumeratedOptions;
- (void)_extractOptionGroupsFromElement:(id)arg1 intoDictionary:(id)arg2;
- (void)_extractOptionsFromElement:(id)arg1 intoDictionary:(id)arg2;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)refresh;

@end

