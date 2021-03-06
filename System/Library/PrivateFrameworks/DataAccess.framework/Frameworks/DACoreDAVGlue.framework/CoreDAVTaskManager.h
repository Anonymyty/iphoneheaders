/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)shutdown;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(id)arg1;
-(void)submitQueuedCoreDAVTask:(id)arg1;

@end

