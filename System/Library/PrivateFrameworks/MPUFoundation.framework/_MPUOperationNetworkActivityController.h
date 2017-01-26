/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _MPUOperationNetworkActivityControllerTimer;

@interface _MPUOperationNetworkActivityController : NSObject {

	unsigned long long _activityCount;
	_MPUOperationNetworkActivityControllerTimer* _timer;

}
+(id)sharedController;
-(void)_updateIndicator;
-(void)networkActivityDidStart;
-(void)networkActivityDidEnd;
-(void)_setIndicatorVisibility:(BOOL)arg1 ;
@end
