/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAlertManagerObserver;
#import <SpringBoard/SpringBoard-Structs.h>
@interface SBAlertManagerObserverWrapper : NSObject {

	struct {
		unsigned willActivate : 1;
		unsigned didActivate : 1;
		unsigned willDeactivate : 1;
		unsigned didDeactivate : 1;
		unsigned didChangeTop : 1;
		unsigned topBgStyleChange : 1;
		unsigned topStatusBarVisibile : 1;
		unsigned topOrientationEnable : 1;
		unsigned didCreateWindow : 1;
		unsigned willTearDownWindow : 1;
		unsigned didTearDownWindow : 1;
		unsigned didRemoveFromWindow : 1;
	}  _flags;
	id<SBAlertManagerObserver> _observer;

}

@property (nonatomic,__weak,readonly) id<SBAlertManagerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SB43 flags;                                   //@synthesize flags=_flags - In the implementation block
-(id)initWithObserver:(id)arg1 flags:(SCD_Struct_SB43)arg2 ;
-(id<SBAlertManagerObserver>)observer;
-(SCD_Struct_SB43)flags;
@end
