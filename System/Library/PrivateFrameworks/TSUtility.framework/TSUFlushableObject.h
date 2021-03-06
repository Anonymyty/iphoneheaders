/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushable.h>

@protocol NSLocking;
@class TSUFlushingManager, NSObject, NSString;

@interface TSUFlushableObject : NSObject <TSUFlushable> {

	int _retainCount;
	int _ownerCount;
	TSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addOwner;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(void)flush;
-(void)unload;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(BOOL)hasFlushableContent;
-(id)ownerRetain;
-(void)ownerRelease;
-(id)ownerAutoreleasedAccess;
@end

