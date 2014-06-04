/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEDistributionLogging, IDEDistributionMethod, NSArray, NSSet, NSString;

@interface IDEDistributionProvisioning : NSObject
{
    NSArray *_rootDistributionItems;
    IDEDistributionMethod *_distributionMethod;
    NSString *_teamID;
    DVTProvisioningProfileManager *_profileManager;
    DVTSigningCertificateManager *_signingCertificateManager;
    IDEDistributionLogging *_logging;
    NSSet *_codesignableDevices;
}

@property(readonly) NSSet *codesignableDevices; // @synthesize codesignableDevices=_codesignableDevices;
@property(readonly) IDEDistributionLogging *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(readonly) NSArray *rootDistributionItems; // @synthesize rootDistributionItems=_rootDistributionItems;
- (void).cxx_destruct;
- (id)_installerSigningInfoForTeamID:(id)arg1 certificateKind:(id)arg2 error:(id *)arg3;
- (id)_signingInfoForItem:(id)arg1 limitToSigningCertificate:(id)arg2 error:(id *)arg3;
- (id)_itemToSigningInfoForSigningCertificate:(id)arg1 flattenedItems:(id)arg2 errors:(id *)arg3;
- (id)_signingCertificatesApplicableForTeamID:(id)arg1 certificateKind:(id)arg2 isForInstaller:(BOOL)arg3 error:(id *)arg4;
- (id)_itemToSigningInfoMap:(id *)arg1;
- (id)logAspect;
- (id)instantiateProvisioningSnapshot:(id *)arg1;
- (id)initWithRootDistributionItems:(id)arg1 distributionMethod:(id)arg2 teamID:(id)arg3 codesignableDevicesOrNil:(id)arg4 logging:(id)arg5;

@end

