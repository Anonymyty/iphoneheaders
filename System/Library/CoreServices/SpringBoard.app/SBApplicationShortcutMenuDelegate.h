/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBApplicationShortcutMenuDelegate <NSObject>
@optional
-(void)applicationShortcutMenuDidDismiss:(id)arg1;
-(void)applicationShortcutMenuDidPresent:(id)arg1;

@required
-(void)applicationShortcutMenu:(id)arg1 activateShortcutItem:(id)arg2 index:(long long)arg3;
-(void)applicationShortcutMenu:(id)arg1 startEditingForIconView:(id)arg2;
-(void)applicationShortcutMenu:(id)arg1 launchApplicationWithIconView:(id)arg2;

@end
