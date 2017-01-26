/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem;

@interface CNLabelPickerController : CNPickerController {

	CNPropertyGroupItem* _item;

}

@property (nonatomic,__weak,readonly) CNPropertyGroupItem * item;              //@synthesize item=_item - In the implementation block
-(CNPropertyGroupItem *)item;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleForPickerItem:(id)arg1 ;
-(id)initForPropertyItem:(id)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
@end
