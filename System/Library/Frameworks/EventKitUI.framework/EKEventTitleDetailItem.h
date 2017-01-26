/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class UITableViewCell, UIColor, NSObject;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	UITableViewCell* _cell;
	UIColor* _color;
	BOOL _showDot;
	BOOL _cellNeedsUpdate;
	BOOL _hidesSeparator;
	NSObject*<EKEventTitleDetailItemDelegate> _editDelegate;

}

@property (assign,nonatomic) BOOL hidesSeparator;                                                        //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<EKEventTitleDetailItemDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
-(void)reset;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setEditDelegate:(NSObject*<EKEventTitleDetailItemDelegate>)arg1 ;
-(NSObject*<EKEventTitleDetailItemDelegate>)editDelegate;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(BOOL)hidesSeparator;
-(void)editButtonPressed;
-(BOOL)shouldShowEditButtonInline;
-(void)setHidesSeparator:(BOOL)arg1 ;
@end
