/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDECodesignIssueResolutionOption.h>

@class DVTDeveloperAccount, DVTSigningCertificate, IDECodesignIssueResolutionPortalSource, NSSet, NSString;

@interface IDECodesignIssueResolutionGenerateDistributionProfileOption : IDECodesignIssueResolutionOption
{
    BOOL _includeDevices;
    IDECodesignIssueResolutionPortalSource *_portal;
    DVTDeveloperAccount *_account;
    DVTSigningCertificate *_signingCertificate;
    NSString *_platformIdentifier;
    NSSet *_bundleIdentifiers;
}

@property BOOL includeDevices; // @synthesize includeDevices=_includeDevices;
@property(copy) NSSet *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(retain) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(retain) IDECodesignIssueResolutionPortalSource *portal; // @synthesize portal=_portal;
- (void).cxx_destruct;
- (id)invokeOptionWithWindowOrNil:(id)arg1;
- (BOOL)requiresUserInteraction;
- (id)name;
- (id)initWithPortalSource:(id)arg1 account:(id)arg2 signingCertificate:(id)arg3 platformIdentifier:(id)arg4 bundleIdentifiers:(id)arg5 includeDevices:(BOOL)arg6 logAspect:(id)arg7;

@end
