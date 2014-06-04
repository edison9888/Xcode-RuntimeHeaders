/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, XCSUser;

@interface XCSUserSession : NSObject
{
    NSString *_guid;
    XCSUser *_user;
    NSDate *_createTime;
    NSDate *_updateTime;
    NSDate *_expireTime;
}

@property(readonly, copy) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, copy) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy) NSDate *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy) XCSUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)initWithGUID:(id)arg1 user:(id)arg2 createTime:(id)arg3 updateTime:(id)arg4 expireTime:(id)arg5;

@end

