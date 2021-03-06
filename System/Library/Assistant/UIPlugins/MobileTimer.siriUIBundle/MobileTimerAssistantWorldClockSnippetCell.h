/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class WorldClockCellView, SAClockObject;

@interface MobileTimerAssistantWorldClockSnippetCell : SiriUIContentCollectionViewCell {

	WorldClockCellView* _clockCellView;
	SAClockObject* _clock;

}

@property (nonatomic,retain) SAClockObject * clock;              //@synthesize clock=_clock - In the implementation block
+(id)cellForSizing;
-(void)_updateForContentSizeChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)reuseIdentifier;
-(SAClockObject *)clock;
-(void)setClock:(SAClockObject *)arg1 ;
@end

