/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "iCloudItemProvider-Protocol.h"

@class DVTDevice, NSMutableData, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface iCloudMonitor : NSObject <iCloudItemProvider>
{
    NSMutableData *_buffer;
    NSRecursiveLock *_processorsLock;
    NSMutableDictionary *_processors;
    NSMutableSet *_globalProcessors;
    NSRecursiveLock *_itemsCacheLock;
    NSMutableDictionary *_itemsByURL;
    id <iCloudItem> _rootItem;
    NSRecursiveLock *_watchersLock;
    NSMutableDictionary *_watchers;
    BOOL _authorized;
    DVTDevice *_device;
    NSString *_deviceIdentifier;
}

+ (void)terminateMonitorServerForServiceCenter:(id)arg1;
+ (void)initiateMonitorServerForServiceCenter:(id)arg1;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) DVTDevice *device; // @synthesize device=_device;
@property(nonatomic, getter=isAuthorized) BOOL authorized; // @synthesize authorized=_authorized;
- (void).cxx_destruct;
- (void)childrenOfParent:(id)arg1 includeDeleted:(BOOL)arg2 completionBlock:(id)arg3;
- (void)removeItemFromCache:(id)arg1;
- (id)addItemToCache:(id)arg1;
- (id)cachedItemForLocalURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)rootItem;
- (id)cachedItemForLocalURL:(id)arg1 type:(id)arg2 status:(unsigned long long)arg3 size:(long long)arg4 modified:(id)arg5;
- (BOOL)hasCachedItemForLocalURL:(id)arg1;
- (void)processLine:(id)arg1;
- (void)processBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)sendCommandUsingProcessor:(id)arg1 format:(id)arg2;
- (id)sendCommandUsingProcessor:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)sendCommand:(id)arg1 usingProcessor:(id)arg2;
- (void)removeWatcherForContainerNamed:(id)arg1;
- (void)setWatcher:(id)arg1 forContainerNamed:(id)arg2;
- (id)watcherForContainerNamed:(id)arg1;
- (id)createWatcherIfAuthorizedByServiceCenter:(id)arg1 forContainerNamed:(id)arg2;
- (void)unregisterGlobalProcessor:(id)arg1;
- (void)registerGlobalProcessor:(id)arg1;
- (void)unregisterProcessorForToken:(id)arg1;
- (id)processorForToken:(id)arg1;
- (id)registerProcessor:(id)arg1;
- (id)nextToken;
- (void)stopConnection;
- (void)startConnection;
- (void)_primitiveSetDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

