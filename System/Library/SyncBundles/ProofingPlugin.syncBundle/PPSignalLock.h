/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock;

@interface PPSignalLock : NSObject {

	NSConditionLock* _lock;

}
-(void)dealloc;
-(id)init;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)wait;
@end

