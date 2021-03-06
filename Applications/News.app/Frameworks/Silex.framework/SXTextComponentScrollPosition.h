/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (assign,nonatomic) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (assign,nonatomic) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
-(void)setCharacterIndex:(long long)arg1 ;
-(void)setRelativeTextOffset:(double)arg1 ;
-(long long)characterIndex;
-(double)relativeTextOffset;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

