/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLEngineResourceDownloadTaskGroup : NSObject {

	NSMutableSet* _activeTasks;

}

@property (nonatomic,readonly) NSSet * activeTasks;                          //@synthesize activeTasks=_activeTasks - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(id)initWithTasks:(id)arg1 ;
-(BOOL)isTrackingTask:(id)arg1 ;
-(void)taskDidComplete:(id)arg1 ;
-(NSSet *)activeTasks;
-(BOOL)isComplete;
@end

