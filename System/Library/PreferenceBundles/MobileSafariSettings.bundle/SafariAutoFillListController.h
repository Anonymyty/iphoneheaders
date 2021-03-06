/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem, NSArray;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _specifiersForAddItem;

}

@property (nonatomic,copy,readonly) NSArray * specifiersForAddItem; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(void)_addItem:(id)arg1 ;
-(void)toggleEditing;
-(void)cancelEditing;
-(BOOL)canBeShownFromSuspendedState;
-(void)deleteButtonTapped;
-(NSArray *)specifiersForAddItem;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(BOOL)keychainSyncIsEnabled;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(unsigned long long)_autoFillItemCount;
-(void)_deleteSelectedItems;
@end

