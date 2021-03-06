/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, NSArray;

@interface VOTUIBrailleView : UIView {

	NSMutableArray* _dotNumberCircleViews;
	NSMutableArray* _dotNumberHighlightedCircleViews;
	NSMutableArray* _viewsForEightDotBrailleOnly;
	UILabel* _insertedTextLabel;
	NSArray* _dotNumberPositions;
	long long _orientation;
	long long _typingMode;
	NSArray* _xConstraintsForDotNumbers;
	NSArray* _yConstraintsForDotNumbers;
	NSArray* _typingModeConstraintsForInsertedTextLabel;

}

@property (nonatomic,readonly) NSArray * dotNumberPositions;                                   //@synthesize dotNumberPositions=_dotNumberPositions - In the implementation block
@property (nonatomic,readonly) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long typingMode;                                           //@synthesize typingMode=_typingMode - In the implementation block
@property (nonatomic,retain) NSArray * xConstraintsForDotNumbers;                              //@synthesize xConstraintsForDotNumbers=_xConstraintsForDotNumbers - In the implementation block
@property (nonatomic,retain) NSArray * yConstraintsForDotNumbers;                              //@synthesize yConstraintsForDotNumbers=_yConstraintsForDotNumbers - In the implementation block
@property (nonatomic,retain) NSArray * typingModeConstraintsForInsertedTextLabel;              //@synthesize typingModeConstraintsForInsertedTextLabel=_typingModeConstraintsForInsertedTextLabel - In the implementation block
-(id)_circleViewForDotNumber:(unsigned long long)arg1 ;
-(void)_updateWindowOrientation;
-(id)_xConstraintForDotNumber:(unsigned long long)arg1 ;
-(void)setYConstraintsForDotNumbers:(NSArray *)arg1 ;
-(NSArray *)xConstraintsForDotNumbers;
-(void)highlightBrailleDots:(id)arg1 ;
-(NSArray *)dotNumberPositions;
-(long long)typingMode;
-(id)initWithOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3 ;
-(void)setOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3 ;
-(NSArray *)typingModeConstraintsForInsertedTextLabel;
-(void)_updateConstantsForDotNumberConstraints;
-(void)_updateDotsSevenAndEightVisibility;
-(id)_generateAndStoreTypingModeConstraintsForInsertedTextLabel;
-(id)_highlightedCircleViewForDotNumber:(unsigned long long)arg1 ;
-(id)_constraintsToCenterItem:(id)arg1 withItem:(id)arg2 ;
-(id)_generateAndStoreConstraintsForDotNumbers;
-(void)setTypingModeConstraintsForInsertedTextLabel:(NSArray *)arg1 ;
-(id)_yConstraintForDotNumber:(unsigned long long)arg1 ;
-(id)_dotCircleImageFilled:(BOOL)arg1 ;
-(NSArray *)yConstraintsForDotNumbers;
-(BOOL)_isEightDotBraille;
-(unsigned long long)_numberOfDots;
-(void)_addSubviews;
-(void)flashInsertedText:(id)arg1 ;
-(void)setXConstraintsForDotNumbers:(NSArray *)arg1 ;
-(void)didMoveToWindow;
-(long long)orientation;
@end

