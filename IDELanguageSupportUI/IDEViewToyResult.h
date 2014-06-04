/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDELanguageSupportUI/IDETimestampedPlaygroundResult.h>

@interface IDEViewToyResult : IDETimestampedPlaygroundResult
{
    long long _windowNumber;
    double _height;
    double _width;
}

@property(readonly) double width; // @synthesize width=_width;
@property(readonly) double height; // @synthesize height=_height;
@property(readonly) long long windowNumber; // @synthesize windowNumber=_windowNumber;
- (id)initWithWindowNumber:(long long)arg1 height:(double)arg2 width:(double)arg3 subjectIdentifier:(id)arg4 resultDate:(id)arg5;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 resultDate:(id)arg3;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2;

@end

