/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MTLToolsServices/DYMTLResourceObject.h>

@class NSSet;

@interface DYMTLLibrary : DYMTLResourceObject
{
    BOOL _onlineCompiled;
    NSSet *_sourceURLs;
}

@property(readonly, nonatomic, getter=isOnlineCompiled) BOOL onlineCompiled; // @synthesize onlineCompiled=_onlineCompiled;
@property(readonly, nonatomic) NSSet *sourceURLs; // @synthesize sourceURLs=_sourceURLs;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(id)arg3;

@end

