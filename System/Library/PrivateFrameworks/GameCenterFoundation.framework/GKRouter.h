/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:44:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GKRouter : NSObject {

	NSMutableArray* _routes;
	NSMutableArray* _handlers;

}
-(void)dealloc;
-(id)init;
-(BOOL)dispatch:(id)arg1 ;
-(void)scheme:(id)arg1 from:(id)arg2 to:(/*^block*/id)arg3 ;
-(void)from:(id)arg1 to:(/*^block*/id)arg2 ;
@end
