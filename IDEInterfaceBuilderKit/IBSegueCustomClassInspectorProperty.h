/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBAbstractCustomClassInspectorProperty.h>

@class IDEInspectorKeyPath, NSString;

@interface IBSegueCustomClassInspectorProperty : IBAbstractCustomClassInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_defaultRuntimeClassName;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (id)inspectedDocumentMembers;
- (BOOL)canMemberChangeCustomClassName:(id)arg1;
- (void)setExternalCustomClassName:(id)arg1 forMember:(id)arg2;
- (id)externalCustomClassNameForMember:(id)arg1;
- (id)runtimeClassNameForMember:(id)arg1;
- (id)effectiveClassNameForMember:(id)arg1;

@end
