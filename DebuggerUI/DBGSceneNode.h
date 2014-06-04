/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DebuggerUI/DBGNode.h>

@class DBGHostNode, DBGInteractiveSceneView, DBGViewInstance, NSColor, SCNMaterial;

@interface DBGSceneNode : DBGNode
{
    DBGInteractiveSceneView *_sceneView;
    DBGNode *_borderNode;
    DBGNode *_backsideNode;
    DBGNode *_connectionLine;
    DBGNode *_distanceLabel;
    SCNMaterial *_imageMaterial;
    BOOL _isWireframeModeEnabled;
    BOOL _isConstraintsWireframeModeEnabled;
    BOOL _isClippingSubviewNodes;
    NSColor *_defaultBorderColor;
    NSColor *_selectedBorderColor;
    BOOL _clippingEnabled;
    BOOL _currentlyOfInterestForAutoLayout;
    BOOL _hasRotation;
    int _nodeContentMode;
    DBGViewInstance *_dbgViewInstance;
    DBGHostNode *_host;
    double _repositioningOffset;
    DBGNode *_constraintsNode;
}

@property BOOL hasRotation; // @synthesize hasRotation=_hasRotation;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property BOOL currentlyOfInterestForAutoLayout; // @synthesize currentlyOfInterestForAutoLayout=_currentlyOfInterestForAutoLayout;
@property(retain) DBGNode *constraintsNode; // @synthesize constraintsNode=_constraintsNode;
@property double repositioningOffset; // @synthesize repositioningOffset=_repositioningOffset;
@property(retain) DBGHostNode *host; // @synthesize host=_host;
@property __weak DBGViewInstance *dbgViewInstance; // @synthesize dbgViewInstance=_dbgViewInstance;
- (void).cxx_destruct;
- (struct CGRect)rectNotAvailableForRePositioning;
- (BOOL)checkIfNode:(id)arg1 isCompletely:(BOOL)arg2 insideRect:(struct CGRect)arg3 withMarging:(float)arg4;
- (void)updateLineWithNodeAtPosition:(struct CGPoint)arg1 outside:(int)arg2;
- (BOOL)handleOffScreenBehavior;
- (void)unclipSubviewContentNodes;
- (void)clipSubviewContentNodes;
@property BOOL clippingEnabled; // @synthesize clippingEnabled=_clippingEnabled;
- (void)updateRenderingOrderWithRangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
@property(readonly) NSColor *selectedBorderColor;
@property(readonly) NSColor *defaultBorderColor;
- (id)_colorForDefaultKey:(id)arg1;
- (void)updateAppearenceAfterConstraintsUpdateWithSelectedItemCount:(unsigned long long)arg1;
- (void)changeBorderColor:(id)arg1 borderOpacity:(double)arg2;
- (void)setBorderHidden:(BOOL)arg1;
- (void)setWireframeModeEnabled:(BOOL)arg1;
- (void)addBoderWithColor:(id)arg1 borderOpacity:(double)arg2;
- (void)updateShaderModifiers;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSnapshot;
- (id)snapshot;
- (id)initWithView:(id)arg1 inSceneView:(id)arg2 host:(id)arg3;

@end

