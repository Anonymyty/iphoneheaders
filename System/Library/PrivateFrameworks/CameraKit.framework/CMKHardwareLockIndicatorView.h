/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeTextView.h>

@interface CMKHardwareLockIndicatorView : CMKBadgeTextView {

	BOOL _focusLocked;
	BOOL _exposureLocked;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_cornerRadius;
-(id)_text;
-(id)_textAttributes;
-(void)_commonCMKHardwareLockIndicatorViewInitialization;
-(void)_updateFromHardwareChange;
-(void)setFocusLocked:(BOOL)arg1 ;
-(void)setExposureLocked:(BOOL)arg1 ;
-(UIEdgeInsets)_textInsets;
-(BOOL)isFocusLocked;
-(BOOL)isExposureLocked;
@end
