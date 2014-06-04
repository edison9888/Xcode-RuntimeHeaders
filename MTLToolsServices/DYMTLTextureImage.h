/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DYTextureImage-Protocol.h"

@class DYMTLTextureImageBackingStore, NSData, NSString;

@interface DYMTLTextureImage : NSObject <DYTextureImage>
{
    DYMTLTextureImageBackingStore *_backingStore;
    NSData *_data;
    NSData *_uncompressedData;
    unsigned int _genericFormat;
    int _mipmapLevel;
    int _layerIndex;
    unsigned int _numSamples;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _offset;
    unsigned long long _rowBytes;
    unsigned long long _imageBytes;
}

+ (id)_imagesFor3DTextureWithProperties:(id)arg1;
+ (id)imagesFromProperties:(id)arg1;
+ (id)textureImageKeyForLevel:(unsigned int)arg1 layer:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long imageBytes; // @synthesize imageBytes=_imageBytes;
@property(readonly, nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) int layerIndex; // @synthesize layerIndex=_layerIndex;
@property(readonly, nonatomic) int mipmapLevel; // @synthesize mipmapLevel=_mipmapLevel;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int genericFormat; // @synthesize genericFormat=_genericFormat;
- (void).cxx_destruct;
- (id)uncompressedData;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
- (id)_initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

