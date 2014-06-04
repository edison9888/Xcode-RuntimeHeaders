/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry
{
    id _reserved;
    double _sphereradius;
    double _sphereradialSpan;
    long long _spheresegmentCount;
    long long _sphereprimitiveType;
    BOOL _spheregeodesic;
    BOOL _spherehemispheric;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)sphereWithRadius:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long segmentCount;
@property(nonatomic) double radius;
- (void)setRadialSpan:(double)arg1;
- (double)radialSpan;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
- (void)setHemispheric:(BOOL)arg1;
- (BOOL)isHemispheric;
@property(nonatomic, getter=isGeodesic) BOOL geodesic;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (id)presentationGeometry;
- (id)presentationSphere;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (void)dealloc;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end

