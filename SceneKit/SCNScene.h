/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DScene *_scene;
    struct __C3DLibrary *_library;
    SCNSceneSource *_sceneSource;
    double _lastEvalTime;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNMaterialProperty *_background;
    NSMutableDictionary *_userAttributes;
    double _fogStartDistance;
    double _fogEndDistance;
    double _fogDensityExponent;
    id _fogColor;
    BOOL _paused;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (SEL)jsConstructor;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1;
+ (id)scene;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (id)initForJavascript:(id)arg1;
- (BOOL)isPausedOrPausedByInheritance;
@property(nonatomic, getter=isPaused) BOOL paused;
- (id)particleSystems;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (void)addParticleSystem:(id)arg1 withTransform:(struct CATransform3D)arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (void *)__CFObject;
- (id)valueForUndefinedKey:(id)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (void)unlock;
- (void)lock;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(id)arg4;
@property(nonatomic) double fogStartDistance;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(retain, nonatomic) id fogColor;
@property(readonly, nonatomic) SCNMaterialProperty *background;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setPlaybackSpeed:(float)arg1;
- (float)playbackSpeed;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)setEndTime:(double)arg1;
- (double)endTime;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)_physicsWorldCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
- (void)_scaleSceneBy:(double)arg1;
- (void)setRootNode:(id)arg1;
- (void)_setRootNode:(id)arg1;
@property(readonly, nonatomic) SCNNode *rootNode;
- (id)root;
- (void)setLibrary:(struct __C3DLibrary *)arg1;
- (struct __C3DLibrary *)library;
- (id)sceneSource;
- (void)setSceneSource:(id)arg1;
- (struct __C3DScene *)sceneRef;
- (id)_scenes;
- (id)scene;
- (void)setLastEvalTime:(double)arg1;
- (double)lastEvalTime;
- (void)dealloc;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (struct SCNVector3)upAxis;
- (void)_syncObjCModel;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (id)init;
- (id)exportAsCOLLADAOperationWithDestinationURL:(id)arg1 attributes:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 userInfo:(void *)arg5;
- (id)exportAsWebGLOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2;

@end

