/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class NSColor, NSMutableArray, NSString, SKBitmapFont, SKSpriteNode;

@interface SKLabelNode : SKNode
{
    float _fontSize;
    CDStruct_83984b6f _fontColor;
    NSString *_fontName;
    NSString *_text;
    SKBitmapFont *_bmf;
    NSMutableArray *_textSprites;
    NSColor *_labelColor;
    float _labelColorBlend;
    long long _labelBlendMode;
    SKSpriteNode *_textSprite;
    long long _horizontalAlignmentMode;
    long long _verticalAlignmentMode;
    struct CGRect _textRect;
}

+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_labelNodeWithFontNamed:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(copy) NSString *text;
- (void)createSpritesForText;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)createBitmapSpritesForText;
- (struct CGRect)frame;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(BOOL)arg2;
- (id)nodeAtPoint:(struct CGPoint)arg1;
- (id)childrenInRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property long long blendMode;
@property double colorBlendFactor;
@property(retain) NSColor *color;
@property(retain) NSColor *fontColor;
@property double fontSize;
@property(copy) NSString *fontName;
@property long long horizontalAlignmentMode;
@property long long verticalAlignmentMode;
- (id)initWithFontNamed:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initialize;
- (id)init;

@end

