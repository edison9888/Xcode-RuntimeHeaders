/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTDeveloperProfileAccountProvider-Protocol.h"

@class DVTDeveloperAccount, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface DVTDeveloperAccountManager : NSObject <DVTDeveloperProfileAccountProvider>
{
    NSMutableOrderedSet *_accounts;
    DVTDeveloperAccount *_defaultAccount;
}

+ (id)sharedAccountManager;
@property(retain, nonatomic) DVTDeveloperAccount *defaultAccount; // @synthesize defaultAccount=_defaultAccount;
- (void).cxx_destruct;
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (void)removeAccountsObject:(id)arg1;
- (void)addAccountsObject:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *accounts;
- (id)_mutableAccounts;
- (void)updateUserDefaults;
- (id)_accountsByCreatingFromDefaults;
- (id)_accountsByCreatingFromKeychain;
- (_Bool)hasAccountWithUsername:(id)arg1;
- (id)accountWithUsername:(id)arg1;

@end

