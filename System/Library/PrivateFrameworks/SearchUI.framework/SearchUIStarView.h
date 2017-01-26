/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface SearchUIStarView : UIView {

	double _rating;

}

@property (assign) double rating;              //@synthesize rating=_rating - In the implementation block
+(id)starImageWithName:(id)arg1 ;
+(id)fullStar;
+(id)halfStar;
+(id)emptyStar;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(id)initWithStarRating:(double)arg1 style:(unsigned long long)arg2 ;
@end
