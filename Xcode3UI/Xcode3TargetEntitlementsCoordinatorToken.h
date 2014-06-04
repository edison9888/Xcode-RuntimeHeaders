/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class Xcode3TargetEntitlementsCoordinator;

@interface Xcode3TargetEntitlementsCoordinatorToken : NSObject
{
    Xcode3TargetEntitlementsCoordinator *_coordinator;
}

@property(retain) Xcode3TargetEntitlementsCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (BOOL)boolEntitlementValueForKey:(id)arg1;
- (id)stringEntitlementValueForKey:(id)arg1;
- (id)arrayOfStringsEntitlementValueForKey:(id)arg1;
- (void)removeEntitlementsFileIfNeeded;
- (void)makeEntitlementsFileIfNeeded;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setEntitlementValue:(id)arg1 forKey:(id)arg2;
- (id)allEntitlementKeys;
- (id)init;
- (id)initWithEntitlementsCoordinator:(id)arg1;

@end

