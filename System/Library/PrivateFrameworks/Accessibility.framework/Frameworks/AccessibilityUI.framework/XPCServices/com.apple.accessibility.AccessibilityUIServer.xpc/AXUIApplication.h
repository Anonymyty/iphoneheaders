/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:10:07 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/XPCServices/com.apple.accessibility.AccessibilityUIServer.xpc/com.apple.accessibility.AccessibilityUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.accessibility.AccessibilityUIServer/com.apple.accessibility.AccessibilityUIServer-Structs.h>
#import <UIKit/UIApplication.h>

@interface AXUIApplication : UIApplication

@property (nonatomic,readonly) long long _expectedViewOrientation; 
-(void)_run;
-(BOOL)_shouldAllowKeyboardArbiter;
-(long long)_expectedViewOrientation;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(BOOL)_accessibilityIsAccessibilityUIServer;
-(BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
-(id)_accessibilityIsolatedWindows;
-(long long)_accessibilityOrientationForCompareGeometry;
@end

