/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoGlanceSync.assistantBundle/NanoGlanceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NARWorkspaceInfo, NSArray;

@interface NGSGlanceSyncSnapshot : NSObject {

	NARWorkspaceInfo* _workspaceInfo;
	NSArray* _glances;

}

@property (nonatomic,readonly) NARWorkspaceInfo * workspaceInfo;              //@synthesize workspaceInfo=_workspaceInfo - In the implementation block
@property (nonatomic,readonly) NSArray * glances;                             //@synthesize glances=_glances - In the implementation block
-(id)initWithWorkspaceInfo:(id)arg1 ;
-(NSArray *)glances;
-(id)glanceAfterAnchor:(id)arg1 postAnchor:(id*)arg2 ;
-(NARWorkspaceInfo *)workspaceInfo;
-(BOOL)isSyncAnchorValid:(id)arg1 ;
-(long long)glanceCount;
-(id)validity;
@end

