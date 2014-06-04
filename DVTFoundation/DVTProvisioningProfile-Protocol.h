/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class DVTAppIDFeatures, DVTPlatform, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@protocol DVTProvisioningProfile <NSObject>
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *certificates;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly) NSData *dataRepresentation;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) NSString *platform;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) BOOL isMacProfile;
@property(readonly) BOOL hasGetTaskAllowEntitlement;
@property(readonly) BOOL isUniversal;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL expired;
@property(readonly) NSArray *identitySigningCertificates;
@property(readonly) NSArray *signingCertificates;
@property(readonly, copy) NSString *localPath;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSDate *creationDate;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSDictionary *entitlements;
@property(readonly) int version;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)longDescription;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)matchesBundleIdentifier:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)containsSigningCertificate:(id)arg1;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
- (BOOL)allowsEntitlements:(id)arg1 offendingKey:(id *)arg2;
- (BOOL)allowsEntitlements:(id)arg1;
@end

