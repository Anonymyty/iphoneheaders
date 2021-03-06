/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/HLPHelpItem.h>

@class NSString, NSArray;

@interface HLPHelpTopicItem : HLPHelpItem {

	NSString* _hrefID;
	NSArray* _categories;

}

@property (nonatomic,copy) NSString * hrefID;                                  //@synthesize hrefID=_hrefID - In the implementation block
@property (nonatomic,copy) NSArray * categories;                               //@synthesize categories=_categories - In the implementation block
@property (getter=isGlossary,nonatomic,readonly) BOOL glossary; 
@property (getter=isCopyright,nonatomic,readonly) BOOL copyright; 
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)hrefID;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 ;
-(void)setHrefID:(NSString *)arg1 ;
-(BOOL)isGlossary;
-(BOOL)isCopyright;
@end

