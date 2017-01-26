/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	ABVCardRecord* _vCard;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) ABVCardRecord * vCard;              //@synthesize vCard=_vCard - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;               //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)attachmentSummary:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(id)icon;
-(int)mediaType;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(ABVCardRecord *)vCard;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(Class)coloredBalloonViewClass;
-(void)setVCard:(ABVCardRecord *)arg1 ;
-(UIImage *)vCardImage;
-(void)setVCardImage:(UIImage *)arg1 ;
@end
