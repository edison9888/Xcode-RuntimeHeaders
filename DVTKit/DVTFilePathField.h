/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextField.h"

@interface DVTFilePathField : NSTextField
{
    BOOL _pathIsEditing;
    BOOL _hasCalledDealloc;
}

+ (Class)cellClass;
@property BOOL pathIsEditing; // @synthesize pathIsEditing=_pathIsEditing;
- (void)dealloc;
- (void)mouseDown:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCell:(id)arg1;
- (id)cell;

@end

