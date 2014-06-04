/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DYImageFormatInfo;

// Not exported
@interface DYImageInfo : NSObject
{
    int _width;
    int _height;
    int _depth;
    int _compressed;
    int _numSamples;
    DYImageFormatInfo *_clientFormatInfo;
    DYImageFormatInfo *_engineFormatInfo;
}

@property(nonatomic) int numSamples; // @synthesize numSamples=_numSamples;
@property(nonatomic) int compressed; // @synthesize compressed=_compressed;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) DYImageFormatInfo *engineFormatInfo; // @synthesize engineFormatInfo=_engineFormatInfo;
@property(retain, nonatomic) DYImageFormatInfo *clientFormatInfo; // @synthesize clientFormatInfo=_clientFormatInfo;
- (void).cxx_destruct;
- (id)initWithClientFormatInfo:(id)arg1 engineFormatInfo:(id)arg2 width:(int)arg3 height:(int)arg4 depth:(int)arg5 compressed:(int)arg6 numSamples:(int)arg7;

@end

