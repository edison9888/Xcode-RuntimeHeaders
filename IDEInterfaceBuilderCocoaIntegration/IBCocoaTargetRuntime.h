/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBTargetRuntime.h"

@interface IBCocoaTargetRuntime : IBTargetRuntime
{
    id <DVTFontTextFieldDataSource> fontDataSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)displayNameForUserInterfaceStyle;
- (Class)imageRequestProcessorClass;
- (id)toolProxyManager;
- (id)idiom;
@property(readonly) id <DVTFontTextFieldDataSource> fontDataSource;
- (id)archiveIdentifier;
- (id)identifier;
- (id)platform;

@end

