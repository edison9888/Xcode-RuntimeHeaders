/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface DYGPUToolsVersionInfo : NSObject <NSCoding>
{
    NSDictionary *_infoPlist;
    NSDictionary *_versionPlist;
    unsigned int _interposeVersion;
}

@property(nonatomic) unsigned int interposeVersion; // @synthesize interposeVersion=_interposeVersion;
@property(copy, nonatomic) NSDictionary *versionPlist; // @synthesize versionPlist=_versionPlist;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)objectForVersionPlistKey:(id)arg1;
- (id)objectForInfoPlistKey:(id)arg1;
@property(readonly, retain, nonatomic) NSString *sourceVersion; // @dynamic sourceVersion;
@property(readonly, retain, nonatomic) NSString *shortVersion; // @dynamic shortVersion;
@property(readonly, retain, nonatomic) NSString *version; // @dynamic version;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

