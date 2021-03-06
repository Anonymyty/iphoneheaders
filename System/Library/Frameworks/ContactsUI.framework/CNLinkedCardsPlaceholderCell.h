/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {

	id<CNPropertyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)performDefaultAction;
@end

