/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSArray, NSMutableDictionary;

@interface DVTUserNotificationCenter : NSObject <NSUserNotificationCenterDelegate>
{
    NSMutableDictionary *_handlers;
}

+ (id)defaultUserNotificationCenter;
- (void).cxx_destruct;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotification:(id)arg1;
- (void)deliverNotification:(id)arg1 withEventHandler:(id)arg2;
- (void)deliverNotification:(id)arg1;
@property(readonly) NSArray *deliveredNotifications;
- (void)removeScheduledNotification:(id)arg1;
- (void)scheduleNotification:(id)arg1 withEventHandler:(id)arg2;
- (void)scheduleNotification:(id)arg1;
@property(copy) NSArray *scheduledNotifications;
- (id)init;

@end

