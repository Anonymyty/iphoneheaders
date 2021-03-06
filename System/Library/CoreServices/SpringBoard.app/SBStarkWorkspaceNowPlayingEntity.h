/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class SBWorkspaceApplication;

@interface SBStarkWorkspaceNowPlayingEntity : SBWorkspaceEntity {

	SBWorkspaceApplication* _application;

}

@property (nonatomic,readonly) SBWorkspaceApplication * application;              //@synthesize application=_application - In the implementation block
+(id)entityForApplication:(id)arg1 ;
-(BOOL)isStarkNowPlayingEntity;
-(id)workspaceApplication;
-(id)initWithDisplayChangeSettings:(id)arg1 ;
-(/*^block*/id)_generator;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)viewControllerClass;
-(SBWorkspaceApplication *)application;
-(id)initWithApplication:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

