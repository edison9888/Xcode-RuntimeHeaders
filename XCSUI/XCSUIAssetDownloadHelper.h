/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface XCSUIAssetDownloadHelper : NSObject <NSURLConnectionDataDelegate>
{
    NSMutableData *_bytes;
    float _percentComplete;
    id _progressBlock;
    id _completionBlock;
    NSURLConnection *_URLConnection;
    NSString *_downloadDestinationFilePath;
    NSURLResponse *_downloadResponse;
    NSURLRequest *_request;
    unsigned long long _expectedDownloadSizeInBytes;
}

+ (id)downloadHelperWithURLRequest:(id)arg1 expectedDownloadSizeInBytes:(unsigned long long)arg2;
@property unsigned long long expectedDownloadSizeInBytes; // @synthesize expectedDownloadSizeInBytes=_expectedDownloadSizeInBytes;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(copy) NSURLResponse *downloadResponse; // @synthesize downloadResponse=_downloadResponse;
@property(copy) NSString *downloadDestinationFilePath; // @synthesize downloadDestinationFilePath=_downloadDestinationFilePath;
@property(retain) NSURLConnection *URLConnection; // @synthesize URLConnection=_URLConnection;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)cancel;
- (void)beginDownload;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

