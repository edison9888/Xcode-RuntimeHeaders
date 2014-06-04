/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSString, SCNLight, SCNMaterialProperty;

@protocol SCNLightJSExport <JSExport>
+ (id)light;
@property(readonly, nonatomic) SCNLight *presentationLight;
@property(nonatomic) unsigned long long categoryBitMask;
@property(readonly, nonatomic) SCNMaterialProperty *gobo;
@property(nonatomic) double spotOuterAngle;
@property(nonatomic) double spotInnerAngle;
@property(nonatomic) double attenuationFalloffExponent;
@property(nonatomic) double attenuationEndDistance;
@property(nonatomic) double attenuationStartDistance;
@property(nonatomic) double zFar;
@property(nonatomic) double zNear;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double shadowBias;
@property(nonatomic) long long shadowMode;
@property(nonatomic) unsigned long long shadowSampleCount;
@property(nonatomic) struct CGSize shadowMapSize;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) id shadowColor;
@property(nonatomic) BOOL castsShadow;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) id color;
@property(copy, nonatomic) NSString *type;
- (id)copy;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
@end

