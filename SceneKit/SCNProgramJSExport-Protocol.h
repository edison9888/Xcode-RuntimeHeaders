/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSString;

@protocol SCNProgramJSExport <JSExport>
+ (id)program;
@property(nonatomic) id <SCNProgramDelegate> delegate;
@property(nonatomic, getter=isOpaque) BOOL opaque;
@property(copy, nonatomic) NSString *fragmentShader;
@property(copy, nonatomic) NSString *vertexShader;
- (id)copy;
- (id)semanticForSymbol:(id)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
@end

