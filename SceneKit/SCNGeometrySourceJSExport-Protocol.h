/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSData, NSString;

@protocol SCNGeometrySourceJSExport <JSExport>
+ (id)geometrySourceWithTextureCoordinates:(struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithNormals:(struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
@property(readonly, nonatomic) long long dataStride;
@property(readonly, nonatomic) long long dataOffset;
@property(readonly, nonatomic) long long bytesPerComponent;
@property(readonly, nonatomic) long long componentsPerVector;
@property(readonly, nonatomic) BOOL floatComponents;
@property(readonly, nonatomic) long long vectorCount;
@property(readonly, nonatomic) NSString *semantic;
@property(readonly, nonatomic) NSData *data;
@end

