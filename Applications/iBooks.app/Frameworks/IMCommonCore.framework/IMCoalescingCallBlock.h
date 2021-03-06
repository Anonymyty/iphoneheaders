/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray;

@interface IMCoalescingCallBlock : NSObject {

	/*^block*/id _notifyBlock;
	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _group;
	NSMutableArray* _callbacks;
	BOOL _pending;
	BOOL _isInvoking;
	unsigned long long _nextCoalescingTime;
	unsigned long long _nextMaxTime;
	double _coalescingDelay;
	double _maximumDelay;

}

@property (assign,nonatomic) double coalescingDelay;              //@synthesize coalescingDelay=_coalescingDelay - In the implementation block
@property (assign,nonatomic) double maximumDelay;                 //@synthesize maximumDelay=_maximumDelay - In the implementation block
-(void)_invoke;
-(void)_invokeIfNotInProgress;
-(void)_coalescingTimeExpired:(unsigned long long)arg1 ;
-(void)_maxTimeExpired:(unsigned long long)arg1 ;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 ;
-(void)signalWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(void)setCoalescingDelay:(double)arg1 ;
-(double)maximumDelay;
-(void)setMaximumDelay:(double)arg1 ;
@end

