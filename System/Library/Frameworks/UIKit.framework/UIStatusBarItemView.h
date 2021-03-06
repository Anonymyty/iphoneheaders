/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilityView, _UILegibilityImageSet, NSString, UIStatusBarItem, UIStatusBarLayoutManager, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarItemView : UIView {

	double _currentOverlap;
	CGContextRef _imageContext;
	double _imageContextScale;
	_UILegibilityView* _legibilityView;
	_UILegibilityImageSet* _lastGeneratedTextImage;
	double _lastGeneratedTextImageLetterSpacing;
	NSString* _lastGeneratedTextImageText;
	BOOL _visible;
	BOOL _allowsUpdates;
	UIStatusBarItem* _item;
	UIStatusBarLayoutManager* _layoutManager;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (nonatomic,readonly) UIStatusBarItem * item;                                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLayoutManager * layoutManager;                       //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL allowsUpdates;                                                    //@synthesize allowsUpdates=_allowsUpdates - In the implementation block
+(id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(BOOL)_shouldReverseLayoutDirection;
-(void)setContentMode:(long long)arg1 ;
-(UIStatusBarItem *)item;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIStatusBarLayoutManager *)layoutManager;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(double)extraRightPadding;
-(id)contentsImage;
-(void)setVisible:(BOOL)arg1 ;
-(long long)textAlignment;
-(id)imageWithShadowNamed:(id)arg1 ;
-(void)beginImageContextWithMinimumWidth:(double)arg1 ;
-(id)imageFromImageContextClippedToWidth:(double)arg1 ;
-(void)endImageContext;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setLayoutManager:(UIStatusBarLayoutManager *)arg1 ;
-(BOOL)isVisible;
-(long long)legibilityStyle;
-(double)standardPadding;
-(id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(id)textFont;
-(void)clearCachedTextImage;
-(double)updateContentsAndWidth;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4 ;
-(void)setAllowsUpdates:(BOOL)arg1 ;
-(BOOL)allowsUpdates;
-(double)legibilityStrength;
-(double)adjustFrameToNewSize:(double)arg1 ;
-(void)setLayerContentsImage:(id)arg1 ;
-(long long)textStyle;
-(double)shadowPadding;
-(void)endDisablingRasterization;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)setCurrentOverlap:(double)arg1 ;
-(double)currentOverlap;
-(double)currentLeftOverlap;
-(double)currentRightOverlap;
-(double)setStatusBarData:(id)arg1 actions:(int)arg2 ;
-(double)extraLeftPadding;
-(double)maximumOverlap;
-(BOOL)animatesDataChange;
-(void)performPendedActions;
-(id)imageWithText:(id)arg1 ;
-(void)beginDisablingRasterization;
@end

