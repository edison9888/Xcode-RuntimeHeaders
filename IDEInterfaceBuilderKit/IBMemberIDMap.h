/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBMutableIdentityDictionary, NSArray, NSMutableArray;

@interface IBMemberIDMap : NSObject
{
    NSMutableArray *_allMembers;
    IBMutableIdentityDictionary *_membersToMemberIDs;
}

@property(readonly, nonatomic) NSArray *allMembers; // @synthesize allMembers=_allMembers;
- (void).cxx_destruct;
- (id)memberIDForMemberOrID:(id)arg1;
- (id)memberIDForMember:(id)arg1;
- (id)memberForMemberID:(id)arg1;
- (void)removeMember:(id)arg1;
- (void)addMember:(id)arg1 withMemberID:(id)arg2;
- (id)init;

@end

