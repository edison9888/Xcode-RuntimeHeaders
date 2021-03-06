/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface CSEntityChangeSet : NSObject
{
    NSString *changeGUID;
    NSString *changeAction;
    NSString *changeType;
    NSString *entityGUID;
    NSNumber *entityRevision;
    NSString *entityType;
    NSString *changeComment;
    NSString *changeUserGUID;
    NSString *changeUserLogin;
    NSNumber *force;
    NSArray *changes;
}

+ (void)initialize;
@property(retain) NSArray *changes; // @synthesize changes;
@property(retain) NSNumber *force; // @synthesize force;
@property(retain) NSString *changeUserLogin; // @synthesize changeUserLogin;
@property(retain) NSString *changeUserGUID; // @synthesize changeUserGUID;
@property(retain) NSString *changeComment; // @synthesize changeComment;
@property(retain) NSString *entityType; // @synthesize entityType;
@property(retain) NSNumber *entityRevision; // @synthesize entityRevision;
@property(retain) NSString *entityGUID; // @synthesize entityGUID;
@property(retain) NSString *changeType; // @synthesize changeType;
@property(retain) NSString *changeAction; // @synthesize changeAction;
@property(retain) NSString *changeGUID; // @synthesize changeGUID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

