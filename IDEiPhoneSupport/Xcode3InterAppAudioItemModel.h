/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEProjectItemModel.h"

@interface Xcode3InterAppAudioItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _portalFlightCheck;
    id <IDEFlightChecking> _entitlementsFlightCheck;
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
}

- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)linkedFrameworksFlightCheck;
- (id)entitlementsFlightCheck;
- (id)portalFlightCheck;

@end

