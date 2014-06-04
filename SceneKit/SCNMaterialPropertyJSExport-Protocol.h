/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@protocol SCNMaterialPropertyJSExport <JSExport>
+ (id)materialPropertyWithContents:(id)arg1;
@property(nonatomic) double maxAnisotropy;
@property(nonatomic) long long mappingChannel;
@property(retain, nonatomic) id borderColor;
@property(nonatomic) long long wrapT;
@property(nonatomic) long long wrapS;
@property(nonatomic) struct CATransform3D contentsTransform;
@property(nonatomic) long long mipFilter;
@property(nonatomic) long long magnificationFilter;
@property(nonatomic) long long minificationFilter;
@property(nonatomic) double intensity;
@property(retain, nonatomic) id contents;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
@end

