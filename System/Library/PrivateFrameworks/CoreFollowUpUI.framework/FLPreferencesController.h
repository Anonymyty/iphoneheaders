/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController;

@interface FLPreferencesController : NSObject {

	FLFollowUpController* _controller;
	int _notifyToken;
	/*^block*/id _itemChangeObserver;

}

@property (nonatomic,copy) id itemChangeObserver;              //@synthesize itemChangeObserver=_itemChangeObserver - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setItemChangeObserver:(id)arg1 ;
-(id)topLevelSpecifiers;
-(id)followUpItemSpecifiers;
-(unsigned long long)_countOfPendingFollowUpItemsToShowInSettings;
-(id)_pendingFollowUpItemsToShowInSettings;
-(id)_specifiersForFollowUpItem:(id)arg1 ;
-(void)actionTapped:(id)arg1 ;
-(id)itemChangeObserver;
@end

