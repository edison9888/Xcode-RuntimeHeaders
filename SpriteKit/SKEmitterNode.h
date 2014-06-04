/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class NSColor, SKAction, SKKeyframeSequence, SKShader, SKTexture;

@interface SKEmitterNode : SKNode
{
    SKTexture *_particleTexture;
    struct SKCEmitterSprite *_eSprite;
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKShader *shader;
- (void)advanceSimulationTime:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) unsigned int fieldBitMask;
- (void)resetSimulation;
@property(nonatomic) unsigned long long numParticlesToEmit;
@property(copy, nonatomic) SKAction *particleAction;
@property(nonatomic) long long particleBlendMode;
@property(retain, nonatomic) SKTexture *particleTexture;
@property(nonatomic) double emissionAngleRange;
@property(nonatomic) double emissionAngle;
@property(nonatomic) double particleSpeedRange;
@property(nonatomic) double particleSpeed;
@property(nonatomic) double particleAlphaSpeed;
@property(nonatomic) double particleAlphaRange;
@property(nonatomic) double particleAlpha;
@property(nonatomic) double particleScaleSpeed;
@property(nonatomic) double particleScaleRange;
@property(nonatomic) double particleScale;
@property(nonatomic) double particleRotationSpeed;
@property(nonatomic) double particleRotationRange;
@property(nonatomic) double particleRotation;
@property(nonatomic) double particleLifetimeRange;
@property(nonatomic) double particleLifetime;
@property(nonatomic) double particleColorBlendFactorSpeed;
@property(nonatomic) double particleColorBlendFactorRange;
@property(nonatomic) double particleColorBlendFactor;
@property(nonatomic) double particleBirthRate;
@property(nonatomic) double yAcceleration;
@property(nonatomic) double xAcceleration;
@property(nonatomic) struct CGVector particlePositionRange;
@property(nonatomic) struct CGPoint particlePosition;
@property(nonatomic) double particleColorAlphaSpeed;
@property(nonatomic) double particleColorBlueSpeed;
@property(nonatomic) double particleColorGreenSpeed;
@property(nonatomic) double particleColorRedSpeed;
@property(nonatomic) double particleColorAlphaRange;
@property(nonatomic) double particleColorBlueRange;
@property(nonatomic) double particleColorGreenRange;
@property(nonatomic) double particleColorRedRange;
@property(retain, nonatomic) NSColor *particleColor;
@property(nonatomic) double particleZPositionRange;
@property(nonatomic) double particleZPosition;
@property(nonatomic) struct CGSize particleSize;
@property(nonatomic) double particleZPositionSpeed;
@property(nonatomic) __weak SKNode *targetNode;
- (double)particleDensity;
- (void)setParticleDensity:(double)arg1;
- (BOOL)densityBased;
- (void)setDensityBased:(BOOL)arg1;
- (id)particleRotationSequence;
- (void)setParticleRotationSequence:(id)arg1;
@property(retain, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleColorSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleAlphaSequence;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)description;
- (void)setPhysicsWorld:(id)arg1;
- (id)physicsWorld;

@end

