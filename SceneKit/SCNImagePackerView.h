/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOpenGLView.h"

@class NSPopUpButton, NSTextField;

// Not exported
@interface SCNImagePackerView : NSOpenGLView
{
    NSPopUpButton *_packerIndex;
    NSTextField *_koUsed;
    NSTextField *_koFree;
    struct __C3DResourceManager *_mngr;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)beginOrtho;
- (void)setResourceManager:(struct __C3DResourceManager *)arg1;
- (void)awakeFromNib;
- (void)autoUpdate;

@end

