/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class SiriUIContentLabel, UIImageView, SiriUIKeyline, NSString;

@interface SiriGKMapButtonView : SiriGKView {

	SiriUIContentLabel* _titleLabel;
	UIImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	SCD_Struct_Si0 _coordinate;
	double _mapSpan;
	NSString* _mapSnippetTitleString;

}
-(id)mapViewSnippet;
-(id)initWithCoodinate:(SCD_Struct_Si0)arg1 mapSpan:(double)arg2 mapTitle:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelectable;
@end
