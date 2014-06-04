/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    id _referenceObject;
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape *_collisionShape;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultShapeForGeometry:(id)arg1;
+ (id)SCNJSExportProtocol;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct btCollisionShape *)_handle;
- (void)_setTransforms:(id)arg1;
- (void)dealloc;
- (id)initWithCachedObject:(void *)arg1 options:(id)arg2;
- (id)initWithContent:(id)arg1 options:(id)arg2;

@end

