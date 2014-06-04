/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDESchemeActionDeviceRecord, IDESchemeActionSDKRecord, NSString;

@interface IDESchemeActionRunDestinationRecord : NSObject
{
    NSString *_displayName;
    NSString *_targetArchitecture;
    IDESchemeActionDeviceRecord *_targetDeviceRecord;
    IDESchemeActionDeviceRecord *_localComputerRecord;
    IDESchemeActionSDKRecord *_targetSDKRecord;
}

+ (id)recordForRunDestination:(id)arg1;
@property(readonly, nonatomic) IDESchemeActionSDKRecord *targetSDKRecord; // @synthesize targetSDKRecord=_targetSDKRecord;
@property(readonly, nonatomic) IDESchemeActionDeviceRecord *localComputerRecord; // @synthesize localComputerRecord=_localComputerRecord;
@property(readonly, nonatomic) IDESchemeActionDeviceRecord *targetDeviceRecord; // @synthesize targetDeviceRecord=_targetDeviceRecord;
@property(readonly, copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDisplayName:(id)arg1 targetArchitecture:(id)arg2 targetDevice:(id)arg3 targetSDK:(id)arg4 localComputer:(id)arg5;
- (id)initWithDisplayName:(id)arg1 targetArchitecture:(id)arg2 targetDevice:(id)arg3 targetSDK:(id)arg4;

@end

