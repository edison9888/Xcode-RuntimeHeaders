/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSArray, SCNMaterialProperty, SCNNode, SCNPhysicsWorld;

@protocol SCNSceneJSExport <JSExport>
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1;
+ (id)scene;
@property(nonatomic) double frameRate;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(retain, nonatomic) id fogColor;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(nonatomic) double fogStartDistance;
@property(readonly, nonatomic) SCNMaterialProperty *background;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property(readonly, nonatomic) SCNNode *rootNode;
@property(readonly) NSArray *particleSystems;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(id)arg4;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)removeParticleSystem:(id)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(id)arg1 withTransform:(struct CATransform3D)arg2;
@end

