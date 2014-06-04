/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBICAbstractPlatformAdapter.h>

@interface IBICCocoaPlatformAdapter : IBICAbstractPlatformAdapter
{
}

- (id)imageSetRepsFromCatalog:(id)arg1 forOperation:(long long)arg2 withOptions:(id)arg3 populatingIssues:(id)arg4;
- (void)compileImageCatalogCollection:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)compileImageSetReps:(id)arg1 options:(id)arg2 queue:(id)arg3 operation:(long long)arg4 completionHandler:(id)arg5;
- (id)compileAppIcon:(id)arg1 options:(id)arg2;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingIssues:(id)arg3;
- (id)absoluteMinimumDeploymentTarget;
- (id)minimumDeploymentTargetSupportingCARFiles;
- (id)targetPlatform;
- (id)defaultTargetDevices;

@end

