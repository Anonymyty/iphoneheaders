/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface AXStickyKeysViewController : UIViewController
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeCapsLockIfNeeded;
-(BOOL)updateWithKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 state:(long long)arg3 ;
-(id)_stringForKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 ;
-(id)_stickyKeysView;
-(void)dealloc;
-(id)init;
-(void)loadView;
@end
