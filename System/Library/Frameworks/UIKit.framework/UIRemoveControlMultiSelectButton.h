/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIRemoveControlMinusButton.h>

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {

	unsigned _isHighlighted : 1;
	unsigned _isSelected : 1;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
+(id)minusCenterImage;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isRotating;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(BOOL)arg1 ;
-(BOOL)isHiding;
-(void)toggleRotate:(BOOL)arg1 ;
-(BOOL)isRotated;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
@end

